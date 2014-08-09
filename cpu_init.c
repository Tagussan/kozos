/***************************************************************
	CPU��ͭ �Ƽ������롼����(FM3/MB9BF618T��)
***************************************************************/


/* PLL����å�����쥸������� */
#define PLL_SCM_CTL   ((volatile unsigned char *)0x40010000)
#define PLL_SCM_STR   ((volatile unsigned char *)0x40010004)
#define PLL_BSC_PSR   ((volatile unsigned char *)0x40010010)
#define PLL_APBC0_PSR ((volatile unsigned char *)0x40010014)
#define PLL_APBC1_PSR ((volatile unsigned char *)0x40010018)
#define PLL_APBC2_PSR ((volatile unsigned char *)0x4001001C)
#define PLL_CSW_TMR   ((volatile unsigned char *)0x40010030)
#define PLL_PSW_TMR   ((volatile unsigned char *)0x40010034)
#define PLL_PLL_CTL1  ((volatile unsigned char *)0x40010038)
#define PLL_PLL_CTL2  ((volatile unsigned char *)0x4001003C)


/* �����å��ɥå������ޥ쥸������� */
#define WDT_CTL     ((volatile unsigned int *)0x40011008)
#define WDT_LCK     ((volatile unsigned int *)0x40011C00)


/* CPU��ͭ��������� */
void CPU_Initialize(void)
{
	/* �����å��ɥå������ޥǥ������֥� */
	*WDT_LCK = 0x1ACCE551;	/* ��å����1 */
	*WDT_LCK = 0xE5331AAE;	/* ��å����2 */
	*WDT_CTL = 0x00000000;	/* �ǥ������֥� */


	/* PLL����å�����(CPU����144MHz) */
	/* �ᥤ��ȯ������å���ư */
	*PLL_CSW_TMR = 0x4D;	/* ���֡�164ms���ᥤ��131ms�Ԥ����� */
	*PLL_SCM_CTL = 0x02;	/* �ᥤ�󥯥�å�ȯ������ */
	while((*PLL_SCM_STR & 0x02)==0){}	/* �����Ԥ� */
	/* PLL����å�ȯ�� */
	*PLL_PSW_TMR  = 0x06;	/* 8ms�Ԥ����� */
	*PLL_PLL_CTL1 = 0x01;	/* K=0(1-1),M=1(2-1) */
	*PLL_PLL_CTL2 = 35;		/* N=35(36-1) */
	*PLL_SCM_CTL = 0x12;	/* PLLȯ������ */
	while((*PLL_SCM_STR & 0x10)==0){}	/* �����Ԥ� */
	/* ����å�ʬ������ */
	*PLL_BSC_PSR   = 0x00;	/* �١�������å�1/1ʬ��(144MHz) */
	*PLL_APBC0_PSR = 0x01;	/* APB0����å�1/2ʬ��(72MHz) */
	*PLL_APBC1_PSR = 0x81;	/* APB1����å�1/2ʬ��(72MHz) */
	*PLL_APBC2_PSR = 0x81;	/* APB2����å�1/2ʬ��(72MHz) */
	/* ����å��ڤ��ؤ� */
	*PLL_SCM_CTL = 0x52;	/* PLLȯ������å����� */

}

