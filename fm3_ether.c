/*
 * fm3_ether.c
 *
 *  Created on: 2012/01/29
 *      Author: Kentaro Sekimoto
 */
#include "common.h"
#include "mcu.h"
#include "fm3_ether.h"
#include "fm3_exti.h"
#include "phy.h"
#include "debug_printf.h"

#define DISABLE_INTERRUPT

// ========== �f�t�H���g�l  �J�n ==========
// DMA Register 0 (BMR)
#define	DEF_DMA_PBL	16		// Programmable Burst Length
#define	DEF_DMA_DSL	0		// Ring Mode
#define	DEF_DMA_PR	1		// 1 -> Rx:Tx=2:1
// ����M�f�B�X�N���v�^
#define DEF_TXDESC_NUM	4	// ���M�f�B�X�N���v�^�̐�
#define DEF_RXDESC_NUM	4	// ��M�f�B�X�N���v�^�̐�
#define DEF_TX_BUF_NUM	(DEF_TXDESC_NUM*2)	// ���M�o�b�t�@�̐�
#define	DEF_TX_BUF_SIZE	1536				// ���M�o�b�t�@�̃T�C�Y
#define	DEF_RX_BUF_SIZE	1536				// ��M�o�b�t�@�̐�
#define DEF_RX_BUF_NUM	(DEF_RXDESC_NUM*2)	// ��M�o�b�t�@�̃T�C�Y
#define MFFR_PROMISCUOUS					// PROMISCUOUS���[�h
// ========== �f�t�H���g�l  �I�� ==========

// ========== �ϐ� �J�n ==========
// FM3���W�X�^
FM3_USBETHERNETCLK_TypeDef *ethclk = FM3_USBETHERNETCLK;
#if !defined(ETH_CH0) && !defined(ETH_CH1)
#error ETH_CH not defined.
#endif
#ifdef ETH_CH0
FM3_ETHERNET_MAC_TypeDef *ethmac = FM3_ETHERNET_MAC0;
#endif
#ifdef ETH_CH1
FM3_ETHERNET_MAC_TypeDef *ethmac = FM3_ETHERNET_MAC1;
#endif
FM3_ETHERNET_CONTROL_TypeDef *ethctrl = FM3_ETHERNET_CONTROL;

// ����M�o�b�t�@
char TxBuf[DEF_TX_BUF_NUM][DEF_TX_BUF_SIZE] __attribute__((aligned(4)));
char RxBuf[DEF_RX_BUF_NUM][DEF_RX_BUF_SIZE] __attribute__((aligned(4)));

// ����M�f�B�X�N���v�^
EMAC_DMA_TXDESC txdesc[DEF_TXDESC_NUM] __attribute__((aligned(4)));
EMAC_DMA_RXDESC rxdesc[DEF_RXDESC_NUM] __attribute__((aligned(4)));

unsigned int txdesc_id = 0;	// ���M�f�B�X�N���v�^�̌��݂̃C���f�b�N�X

// MAC�A�h���X
char MACAddr[6];

// ========== �ϐ� �I��==========

unsigned short htons(unsigned short n)
{
	return ((n & 0xff) << 8) | ((n & 0xff00) >> 8);
}

unsigned short ntohs(unsigned short n)
{
	return ((n & 0xff) << 8) | ((n & 0xff00) >> 8);
}

static void wait(volatile unsigned int count)
{
	while (count-- > 0) ;
}

int PHY_Write(unsigned int phy_addr, unsigned int phy_register, unsigned int value, unsigned int timeout)
{
	while ((ethmac->GAR & GMAC_GAR_GB) != 0) {
		if (timeout-- == 0)
			return FALSE;
	}
	ethmac->GDR = (unsigned short)value;
	ethmac->GAR &= ~((0x1f << GMAC_GAR_B_PA) | (0x1f << GMAC_GAR_B_GR));
	ethmac->GAR |= ((phy_addr << GMAC_GAR_B_PA) | (phy_register << GMAC_GAR_B_GR));
	ethmac->GAR |=  ((1 << GMAC_GAR_B_GW) |(1 << GMAC_GAR_B_GB));
	return TRUE;
}

int PHY_Read(unsigned int phy_addr, unsigned int phy_register, unsigned int *value, unsigned int timeout)
{
	unsigned int count = timeout;
	while ((ethmac->GAR & GMAC_GAR_GB) != 0) {
		if (count-- == 0)
			return FALSE;
	}
	ethmac->GAR &= ~((0x1f << GMAC_GAR_B_PA) | (0x1f << GMAC_GAR_B_GR));
	ethmac->GAR |= ((phy_addr << GMAC_GAR_B_PA) | (phy_register << GMAC_GAR_B_GR));
	ethmac->GAR &=  ~(1 << GMAC_GAR_B_GW);
	ethmac->GAR |= (1 << GMAC_GAR_B_GB);
	count = timeout;
	while ((ethmac->GAR & GMAC_GAR_GB) != 0) {
		if (count-- == 0)
			return FALSE;
	}
	*value = (unsigned int)ethmac->GDR;
	return TRUE;
}

int PHY_Reset(void)
{
	unsigned int value;
	int flag = FALSE;
	unsigned int reset_retry = DEF_PHY_RESET_RETRY;
	while (reset_retry-- > 0) {
		if (PHY_Write(PHY_ADDR, PHY_REG_BMCR, BMCR_RESET, MII_WR_TOUT) == TRUE) {
			unsigned int status_retry = DEF_PHY_STATUS_RETRY;
			while (status_retry-- > 0) {
				if (PHY_Read(PHY_ADDR, PHY_REG_BMCR, &value, MII_RD_TOUT) == TRUE) {
					if ((value & BMCR_RESET) == 0) {
						flag = TRUE;
						break;
					}
				}
			}
			if (flag == TRUE)
				break;
		}
	}
	return flag;
}

int PHY_AutoNegotiate(void)
{
	unsigned int value;
	int flag = FALSE;
	unsigned int reset_retry = DEF_PHY_RESET_RETRY;
	while (reset_retry-- > 0) {
		if (PHY_Write(PHY_ADDR, PHY_REG_BMCR, PHY_AUTO_NEG, MII_WR_TOUT) == TRUE) {
			//	    	PHY_Write(PHY_ADDR, 4, 0x1E1, MII_WR_TOUT);
			//	    	PHY_Write(PHY_ADDR, PHY_REG_BMCR, 0x1200, MII_WR_TOUT);
			unsigned int status_retry = DEF_PHY_STATUS_RETRY;
			while (status_retry-- > 0) {
				if (PHY_Read(PHY_ADDR, PHY_REG_BMSR, &value, MII_RD_TOUT) == TRUE) {
					if (value & BMSR_AUTO_DONE) {
						flag = TRUE;
						break;
					}
				}
			}
			if (flag == TRUE)
				break;
		}
	}
	if (flag)
		debug_printf("PHY: AutoNegotiate OK\n");
	else
		debug_printf("PHY: AutoNegotiate NG\n");
	return flag;
}

void PHY_Init(void)
{
	unsigned int id1, id2;

	if (PHY_Reset() == TRUE) {
		debug_printf("PHY: Reset OK\n");
	} else {
		debug_printf("PHY: Reset NG\n");
	}
	if (PHY_Read(PHY_ADDR, PHY_REG_IDR1, &id1, MII_RD_TOUT) == TRUE) {
		debug_printf("PHY: ReadID OK %04x\n", id1);
	} else {
		debug_printf("PHY: ReadID NG\n");
	}
	if (PHY_Read(PHY_ADDR, PHY_REG_IDR2, &id2, MII_RD_TOUT) == TRUE) {
		debug_printf("PHY: ReadID OK %04x\n", id2);
	} else {
		debug_printf("PHY: ReadID NG\n");
	}

#ifdef ICS1894
	if (PHY_Write(PHY_ADDR, PHY_REG_19, 0x0201, MII_WR_TOUT) == TRUE) {
		debug_printf("PHY: MDI_MODE OK\n");
	} else {
		debug_printf("PHY: MDI_MODE NG\n");
	}
	/* LED0/LED1 �_���p�^�[���ݒ�(LED0:�����N�A�b�v/LED1:�A�N�e�B�u) */
	if (PHY_Write(PHY_ADDR, PHY_REG_20, 0x0008, MII_WR_TOUT) == TRUE) {
		debug_printf("PHY: LED initialize OK\n");
	} else {
		debug_printf("PHY: LED initialize NG\n");
	}
	/* PHY���荞�ݏo�͐ݒ�(���荞�ݏo�͗L��/�����N�A�b�v&�����N�_�E�����荞��) */
	if (PHY_Write(PHY_ADDR, PHY_REG_22, 0xB005, MII_WR_TOUT) == TRUE) {
		debug_printf("PHY: IntOut initialize OK\n");
	} else {
		debug_printf("PHY: IntOut initialize NG\n");
	}
#endif
#ifdef DEBUG_DUMP
	PHY_Register_Dump();
#endif
}

int PHY_LinkSpeed(void)
{
	unsigned int value;

	debug_printf("Waiting for auto negotiation...\n");
	if (PHY_AutoNegotiate() != TRUE) {
		PHY_Write(PHY_ADDR, PHY_REG_BMCR, 0x3100, MII_WR_TOUT);
		ethmac->MCR |= (GMAC_MCR_FES | GMAC_MCR_DM);
		debug_printf("LinkSpeed: Full Duplex\n");
		debug_printf("LinkSpeed: 100Mbs\n");
	} else {
		if (PHY_Read(PHY_ADDR, PHY_REG_BMSR, &value, MII_RD_TOUT) == FALSE){
			return FALSE;
		}
		if (value & STS_FULL_DUP) {
			debug_printf("LinkSpeed: Full Duplex\n");
		} else {
			debug_printf("LinkSpeed: Half Duplex\n");
		}
		if (value & STS_10_MBIT) {
			debug_printf("LinkSpeed: 10Mbs\n");
		} else {
			debug_printf("LinkSpeed: 100Mbs\n");
			PHY_Write(PHY_ADDR, PHY_REG_BMCR, 0x2100, MII_WR_TOUT);
			ethmac->MCR |= (GMAC_MCR_FES | GMAC_MCR_DM);
		}
	}
	return TRUE;
}

// ���M�f�B�X�N���v�^�̏�����
void TXDESC_Init(EMAC_DMA_TXDESC *txdesc, unsigned int b1ap, unsigned int b2ap)
{
	txdesc->TDES0 = 0;
	txdesc->TDES1_f.TBS1 = 0;
	txdesc->TDES1_f.TBS2 = 0;
	txdesc->TDES1_f.TBS1 = 0;
	txdesc->TDES1_f.TBS2 = 0;
	txdesc->TDES2 = b1ap;
	txdesc->TDES3 = b2ap;
	txdesc_id = 0;
}

// ���M�f�B�X�N���v�^�̏�����
void RXDESC_Init(EMAC_DMA_RXDESC *rxdesc, unsigned int b1ap, unsigned int b2ap)
{
	rxdesc->RDES0 = 0;
	rxdesc->RDES1_f.RBS1 = DEF_RX_BUF_SIZE;
	rxdesc->RDES1_f.RBS2 = DEF_RX_BUF_SIZE;
	rxdesc->RDES2 = b1ap;
	rxdesc->RDES3 = b2ap;
}

// ����M�f�B�X�N���v�^�̏�����
void DESC_Init(void)
{
	unsigned int i;
	for (i=0; i<DEF_TXDESC_NUM; i++) {
		TXDESC_Init(&txdesc[i], (unsigned int)&TxBuf[i*2], (unsigned int)&TxBuf[i*2+1]);
		if (i == (DEF_TXDESC_NUM-1))
			txdesc[i].TDES0_f.TER = 1;
	}
	for (i=0; i<DEF_RXDESC_NUM; i++) {
		RXDESC_Init(&rxdesc[i], (unsigned int)&RxBuf[i*2], (unsigned int)&RxBuf[i*2+1]);
		rxdesc[i].RDES0_f.OWN = 1;
		if (i == (DEF_RXDESC_NUM-1))
			rxdesc[i].RDES1_f.RER = 1;
	}
	ethmac->RDLAR = (unsigned int)&rxdesc[0];
	ethmac->TDLAR = (unsigned int)&txdesc[0];
}

// Ethernet DMA�̏�����
// Refer to Programming Guide P.170
void DMA_Init(void)
{
	ethmac->BMR = DMA_BMR_SWR;						// �\�t�g�E�F�A���Z�b�g
	while ((ethmac->BMR & DMA_BMR_SWR) == 1);		// ���Z�b�g�����҂�
	while ((ethmac->AHBSR & DMA_AHBSR_AHBS) == 1);	// AHB�}�X�^�����̊����҂�
	ethmac->MCR |= GMAC_MCR_PS;						// MII���邢��RMII�̃|�[�g�ݒ�
	// �o�X���[�h���W�X�^�̐ݒ�
	// �����ݒ�: Mixed Burst=1 , AAL=0, FB = 0, Fixed burst or undefined burst.
	// ethmac->BMR = 0x04025002;
	ethmac->BMR &= ~(DMA_BMR_FB | 					// FB = 0
			DMA_BMR_AAL);							// AAL = 0
	ethmac->BMR |= 	(DMA_BMR_MB |					// Mixed Burst = 1
			(DEF_DMA_PBL << DMA_BMR_B_PBL) |		// Programmable Burst Length
			(DEF_DMA_DSL << DMA_BMR_B_DSL) |		// Descriptor Skip Length
			DMA_BMR_DA |							// DMA arbitration scheme
			(DEF_DMA_PR << DMA_BMR_B_PR));			// Priority Ratio
	DESC_Init();									// �f�B�X�N���v�^�̏�����
	// �I�y���[�V�������[�h���W�X�^�̐ݒ�
	ethmac->OMR = (DMA_OMR_RSF 	|					// RSF (Receive Store and Forward)
			DMA_OMR_TSF |							// TSF (Transmit Store Forward)
			DMA_OMR_FUF);							// FUF (Forward Undersized Good Frames) 64�o�C�g�����̓]��
	ethmac->SR |= DMA_SR_NIS;						// �ʏ튄�荞�݂̃X�e�[�^�X�N���A
	ethmac->IER = (DMA_IER_NIE |					// NIE (Normal Interrupt Summary Enable)
			DMA_IER_TIE | 							// TIE (Transmit Interrupt)
			DMA_IER_RIE | 							// RIE (Receive Interrupt Enable)
			DMA_IER_ERE);							// ERE (Early Receive Interrupt Enable)
	while ((ethmac->AHBSR & DMA_AHBSR_AHBS) == 1);	// AHB�}�X�^�����̊����҂�
	ethmac->OMR |= (DMA_OMR_SR | DMA_OMR_ST);		// DMA��M�A���M�J�n
}

// GMAC�̏�����
// GMAC : Ethernet Media Access Controller
void GMAC_Init(unsigned char *pmac)
{
	ethmac->GAR |= GMAC_GAR_CR;				// CR�r�b�g�̐ݒ� (CR:0001 -> SYS_CLK 100-150MHz SYS_CLK/62)
#ifndef DISABLE_INTERRUPT
	EXTI_Init();							// �O�����荞�݂̏�����
#endif
	PHY_Init();								// PHY������
	PHY_LinkSpeed();						// PHY�I�[�g�l�S�V�G�[�V������A�����N�X�s�[�h�̐ݒ�
	memcpy((void *)MACAddr, (void *)pmac, 6);	// MAC�A�h�A���X�ݒ�
	ethmac->MAR0H = (unsigned int)(*((unsigned short *)pmac));
	ethmac->MAR0L = (unsigned int)(*((unsigned int *)(pmac+2)));
#ifdef MFFR_PROMISCUOUS
	ethmac->MFFR = (GMAC_MFFR_PR | GMAC_MFFR_RA);	// �t�B���^�̐ݒ�(�v���~�X�L���X���[�h�A�t�B���^����)
#else
	ethmac->MAR1H = (unsigned int)(*((unsigned short *)pmac)) | 0x80000000;
	ethmac->MAR1L = (unsigned int)(*((unsigned int *)(pmac+2)));
	ethmac->MFFR &= ~(GMAC_MFFR_DB);
	ethmac->MFFR |= GMAC_MFFR_HUC;
#endif
	ethmac->MCR |= GMAC_MCR_TE | GMAC_MCR_RE;		// ����M��L����
}

// Ethernet Control ���W�X�^������
void ETHCTRL_Init(void)
{
	ethctrl->ETH_CLKG = (3 << ETH_CLKG_MACEN);		// start EMAC clock
#ifdef ETH_CH0
	ethctrl->ETH_MODE = (1 << ETH_MODE_IFMODE) |	// set RMII mode and reset EMAC
			(1 << ETH_MODE_RST0);
	wait(5000000);
	ethctrl->ETH_MODE = (1 << ETH_MODE_IFMODE) |	// set RMII mode and start EMAC
			(0 << ETH_MODE_RST0);
#endif
#ifdef ETH_CH1
	ethctrl->ETH_MODE = (1 << ETH_MODE_IFMODE) |	// set RMII mode and reset EMAC
			(1 << ETH_MODE_RST1);
	wait(5000000);
	ethctrl->ETH_MODE = (1 << ETH_MODE_IFMODE) |	// set RMII mode and start EMAC
			(0 << ETH_MODE_RST1);
#endif
}

// ���p�\�ȑ��M�f�B�X�N���v�^�̎擾
EMAC_DMA_TXDESC *TXDESC_Available(void)
{
	int i = DEF_TXDESC_NUM;
	EMAC_DMA_TXDESC *ptxdesc;
	while (i-- > 0) {
		ptxdesc = (EMAC_DMA_TXDESC *)&txdesc[txdesc_id];
		txdesc_id++;
		if (txdesc_id == DEF_TXDESC_NUM)
			txdesc_id = 0;
		if (ptxdesc->TDES0_f.OWN == 0)
			return ptxdesc;
	}
#if 0
	for (i=0; i<DEF_TXDESC_NUM; i++) {
		if (txdesc[i].TDES0_f.OWN == 0)
			return (EMAC_DMA_TXDESC *)&txdesc[i];
	}
#endif
	return (EMAC_DMA_TXDESC *)NULL;
}

// ��M�f�[�^������M�f�B�X�N���v�^�̎擾
EMAC_DMA_RXDESC *RXDESC_Received(void)
{
	int i;
	for (i=0; i<DEF_RXDESC_NUM; i++) {
		if (rxdesc[i].RDES0_f.OWN == 0) {
			return (EMAC_DMA_RXDESC *)&rxdesc[i];
		}
	}
	return (EMAC_DMA_RXDESC *)NULL;
}

// ���M�f�[�^�𑗐M�f�B�X�N���v�^�ɃR�s�[���A���M����B(���M�҂��ɂ���)
void Packet_Send(unsigned char *p, unsigned int size)
{
	EMAC_DMA_TXDESC *ptxdesc;
	unsigned char *dst;
	while ((ptxdesc = TXDESC_Available()) == NULL);
	dst = (unsigned char *)(ptxdesc->TDES2);
	memcpy(dst, p, size);
	ptxdesc->TDES0_f.CIC = 3;				// �`�F�b�N�T���̎����ǉ�
	//ptxdesc->TDES0_f.IC = 1;				//�@���݂̃t���[�����M��A���M���荞��
	ptxdesc->TDES0_f.FS = 1;				// �o�b�t�@���t���[���̍ŏ��̕������܂�
	ptxdesc->TDES0_f.LS = 1;				// �o�b�t�@���t���[���̍Ō�̕������܂�
	ptxdesc->TDES1_f.TBS1 = size;			// ���M�T�C�Y�ݒ�
	ptxdesc->TDES0_f.OWN = 1;				// ���M�ĊJ�̂��߁A�f�B�X�N���v�^��DMA���L�Ƃ���
	ethmac->OMR_f.ST = 1;					// DMA��Run�X�e�[�g��
	ethmac->TPDR = (unsigned int)0;		// ���M�ĊJ�̂��߁A�f�B�X�N���v�^�̃|�[�����O��v��
}

int Packet_Recv(unsigned char *p)
{
	EMAC_DMA_RXDESC	*prxdesc;
	unsigned char *src;
	int size = 0;

	prxdesc = RXDESC_Received();
	if (prxdesc) {
		src = (unsigned char *)prxdesc->RDES2;
		size = prxdesc->RDES1_f.RBS1;
		memcpy(p, src, size);
		prxdesc->RDES0_f.OWN = 1;
	}

	return size;
}

// Ethernet�����݃n���h��
void ETH_IRQHandler(FM3_ETHERNET_MAC_TypeDef *pethmac)
{
	EMAC_DMA_RXDESC	*prxdesc = 0;
	unsigned int gmac_isr = pethmac->ISR;
	unsigned int dma_sr = pethmac->SR;
	if ((dma_sr & DMA_SR_RI) != 0) {
		// RI (Receive Interrupt)�̏���
		if ((prxdesc = RXDESC_Received()) != NULL) {
			struct eth_packet *ethp = (struct eth_packet *)prxdesc->RDES2;
			if (strncmp((const char*)ethp, (const char*)&MACAddr, 6) != 0) {
				prxdesc->RDES0_f.OWN = 1;
			}
			pethmac->SR |= DMA_SR_RI;
		}
	} else
	if ((dma_sr & DMA_SR_TU) != 0) {
		// TU (Transmit Buffer Unavailable)�̏���
		// ���M��A�A�����đ��M����ۂɗ��p����
		// TODO
		pethmac->SR |= (DMA_SR_TU);	// TC��R_SS_WC�r�b�g
		debug_printf("TU\n");
	} else if ((dma_sr & DMA_SR_TI) != 0) {
		// TI TI (Transmit Interrupt)�̏���
		// ���M��A�A�����đ��M����ۂɗ��p����
		// TODO
		//ethmac->SR |= (DMA_SR_TI);	// TI��R_SS_WC�r�b�g
		debug_printf("TI\n");
	} else if ((dma_sr & DMA_SR_ERI) != 0) {
		// ERI (Early Receive Interrupt))
		// DMA ���p�P�b�g�̍ŏ��̃f�[�^�o�b�t�@���[�U�������Ƃ������B�����N���A�����
		//debug_printf("ISR:%08x DSR:%08x\n", gmac_isr, dma_sr);
	} else {
		// �f�o�b�O�p�\��
		debug_printf("ISR:%08x DSR:%08x\n", gmac_isr, dma_sr);
	}
}

#ifdef __GCC__
void ETH0_IRQHandler(void) __attribute__((interrupt));
void ETH0_IRQHandler(void)
#else
void ETHER_MAC0_IRQHandler(void)
#endif
{
	ETH_IRQHandler(FM3_ETHERNET_MAC0);
}

#ifdef __GCC__
void ETH1_IRQHandler(void) __attribute__((interrupt));
void ETH1_IRQHandler(void)
#else
void ETHER_MAC1_IRQHandler(void)
#endif
{
	ETH_IRQHandler(FM3_ETHERNET_MAC1);
}

// Pin	CH	Pin name
// PC0:	1	E_RXDV1
// PC1:	1	E_RX11
// PC2:	1	E_RX10
// PC3:	0	E_RX01
// PC4:	0	E_RX00
// PC5:	0	E_RXDV0
// PC6:	0	E_MDIO0
// PC7:	0	E_MDC0
// PC8:	01	E_RXCK0_REFCK
// PC9:
// PCA:
// PCB:
// PCC:	1	E_MDIO1
// PCD:	1	E_MDC1
// PCE:	1	E_TXEN1
// PCF:	1	E_TX11
// PD0:	1	E_TX10
// PD1:	0	E_TX01
// PD2:	0	E_TX00
// PD3: 0	E_TXEN0

//#define	PFRC_ETH0	0x01F8
//#define	PFRD_ETH0	0x000E
#define	PFRC_ETH	0xF1FF
#define	PFRD_ETH	0x000F

#define	B_E_TD0E	18
#define	B_E_TD1E	19
#define	B_E_TE0E	20
#define B_E_TE1E	21
#define	B_E_MC0E	22
#define	B_E_MC1B	23
#define	B_E_MD0B	24
#define	B_E_MD1B	25
#define	B_E_CKE		26
#define	B_E_PSE		27
#define	B_E_SPLC	28

// Ethernet�֘AGPIO�s���̏���������ъ����ݐݒ�
void ETHHW_Init(void)
{
	FM3_GPIO->PFR6 &= ~0x0004;
	FM3_GPIO->DDR6 &= ~0x0004;
	FM3_GPIO->PFRC = PFRC_ETH;		// GPIO configuration for CH0 and CH1
	FM3_GPIO->PFRD = PFRD_ETH;		// GPIO configuration for CH0 and CH1
#if 1
	FM3_GPIO->EPFR14 = (3 << B_E_SPLC) |
//						(1 << B_E_PSE) |
			(1 << B_E_CKE) |
			(1 << B_E_MD1B) |
			(1 << B_E_MD0B) |
			(1 << B_E_MC1B) |
			(1 << B_E_MC0E) |
			(1 << B_E_TE1E) |
			(1 << B_E_TE0E) |
			(1 << B_E_TD1E) |
			(1 << B_E_TD0E);
#else
	FM3_GPIO->EPFR14 = (2 << B_E_SPLC) |
//						(1 << B_E_PSE) |
			(1 << B_E_CKE) |
			(1 << B_E_MD0B) |
			(1 << B_E_MC0E) |
			(1 << B_E_TE0E) |
			(1 << B_E_TD0E);
#endif
#ifndef DISABLE_INTERRUPT
#ifdef ETH_CH0
	NVIC_EnableIRQ(ETHER_MAC0_IRQn);
	NVIC_SetPriority(ETHER_MAC0_IRQn, FM3_ETHER_PRIORITY);
#endif
#ifdef ETH_CH1
	NVIC_EnableIRQ(ETHER_MAC1_IRQn);
	NVIC_SetPriority(ETHER_MAC1_IRQn, FM3_ETHER_PRIORITY);
#endif
#endif
}

// ========== �f�o�b�O�֘A ==========

// ���M�f�B�X�N���v�^�̃_���v
void TXDESC_Dump(void)
{
	int i;
	for (i=0; i<DEF_TXDESC_NUM; i++) {
		debug_printf("TD[%d]%08x TDES0 %08x\n", i, &txdesc[i], txdesc[i].TDES0);
#if 0
		debug_printf("TD[%d]%08x TDES1 %08x\n", i, &txdesc[i], txdesc[i].TDES1);
		debug_printf("TD[%d]%08x TDES2 %08x\n", i, &txdesc[i], txdesc[i].TDES2);
		debug_printf("TD[%d]%08x TDES3 %08x\n", i, &txdesc[i], txdesc[i].TDES3);
#endif
	}
}

// ��M�f�B�X�N���v�^�̃_���v
void RXDESC_Dump(void)
{
	int i;
	for (i=0; i<DEF_RXDESC_NUM; i++) {
		debug_printf("RD[%d]%08x RDES0 %08x\n", i, &rxdesc[i], rxdesc[i].RDES0);
#if 0
		debug_printf("RD[%d]%08x RDES1 %08x\n", i, &rxdesc[i], rxdesc[i].RDES1);
		debug_printf("RD[%d]%08x RDES2 %08x\n", i, &rxdesc[i], rxdesc[i].RDES2);
		debug_printf("RD[%d]%08x RDES3 %08x\n", i, &rxdesc[i], rxdesc[i].RDES3);
#endif
	}
}

// ���݂̃f�B�X�N���v�^�̃_���v
void CurrentDESC_Dump(void)
{
	EMAC_DMA_TXDESC *ptxdesc = (EMAC_DMA_TXDESC *)(ethmac->CHTDR);
	EMAC_DMA_RXDESC *prxdesc = (EMAC_DMA_RXDESC *)(ethmac->CHRDR);
}

// ��vDMA���W�X�^�̃_���v
void DMA_Register_Dump(void)
{
	//debug_printf("GMAC 0 (MCR)  %08x\n", ethmac->MCR);
	//debug_printf("GMAC 1 (MFFR) %08x\n", ethmac->MFFR);
	//debug_printf("DMA 0  (BMR)  %08x\n", ethmac->BMR);
	debug_printf("DMA 5  (SR)   %08x\n", ethmac->SR);
	debug_printf("DMA 6  (OMR)  %08x\n", ethmac->OMR);
	debug_printf("DMA 7  (IER)  %08x\n", ethmac->IER);
	debug_printf("DMA 14 (ISR)  %08x\n", ethmac->ISR);
	debug_printf("DMA 18 (CHDR) %08x\n", ethmac->CHTDR);
	debug_printf("txdesc        %08x\n", &txdesc[txdesc_id]);
}

#ifdef __GCC__
unsigned int phy_register_mask = 0b00000011111111110000000111111111;
#else
unsigned int phy_register_mask = 0x03ff01ff;
#endif

// ��vPHY���W�X�^�̃_���v
void PHY_Register_Dump(void)
{
	unsigned int value;
	unsigned int bit_mask = phy_register_mask;
	int i;
	for (i = 0; i < 31; i++) {
		PHY_Read(PHY_ADDR, (unsigned int)i, &value, MII_RD_TOUT);
		if (bit_mask & 0x1)
			debug_printf("Reg %02d: %04x\n", i, value);
		bit_mask >>= 1;
	}
}

// Ethernet������
void Ether_Init(unsigned char *pmac)
{
	ETHHW_Init();
	ETHCTRL_Init();
	DMA_Init();
	GMAC_Init(pmac);
}
