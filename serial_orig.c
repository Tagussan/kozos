#include "mb9bf618t_asm.h"

#define PCLK2   72000000        // PCLK2���ȿ� (Hz)
#define BPS     38400           // �̿�®�� (bps)

#define out_w(reg, dat) \
        (*(volatile unsigned int   *)(reg)) = (dat)
#define in_w(reg)       \
        (*(volatile unsigned int   *)(reg))
#define out_h(reg, dat) \
        (*(volatile unsigned short *)(reg)) = (dat)
#define in_h(reg)       \
        (*(volatile unsigned short *)(reg))
#define out_b(reg, dat) \
        (*(volatile unsigned char *)(reg)) = (dat)
#define in_b(reg)       \
        (*(volatile unsigned char *)(reg))

/* �ǥХ�������� */
int serial_init(int index)
{
#if !defined(USE_CH3) && !defined(USE_CH4)
#error Serial channel undefined.
#endif
  // ������ȥԥ������
#ifdef USE_CH3
  out_w(GPIO_EPFR07, in_w(GPIO_EPFR07) | 0x03c00000);
  out_w(GPIO_PFR4, in_w(GPIO_PFR4) | 0x00000300);
#endif
#ifdef USE_CH4
  out_w(GPIO_EPFR08, in_w(GPIO_EPFR08) | 0x000000f0);
                                        // SIN4_2, SOT4_2�����
  out_w(GPIO_PFR0, (in_w(GPIO_PFR0) & ~0x000000f0) | 0x00000060);
                                        // P06, P05����յ�ǽ�Ȥ���
#endif

  // ���ꥢ�륤�󥿥ե�����������
  out_b(MFS_SCR, 0x80);                 // �ꥻ�åȡ�����ػߡ��������ػ�
  out_b(MFS_SMR, 0x01);                 // UART, 1 stop bit, LSB first
  out_b(MFS_ESCR, 0x00);                // NRZ, no parity, 8bit
  out_h(MFS_BGR, PCLK2 / BPS - 1);      // �̿�®������
  out_b(MFS_FCR0, 0x00);                // FIFO�ϻ��Ѥ��ʤ�
  out_b(MFS_SCR, 0x03);                 // ����������

  return 0;
}

/* ������ǽ���� */
int serial_is_send_enable(int index)
{
  return in_b(MFS_SSR) & 0x02;  // TDRE
}

/* ��ʸ������ */
int serial_send_byte(int index, unsigned char c)
{
  /* ������ǽ�ˤʤ�ޤ��Ԥ� */
  while (!serial_is_send_enable(index));

  /* �������� */
  out_h(MFS_TDR_RDR, c);

  return 0;
}

/* ������ǽ���� */
int serial_is_recv_enable(int index)
{
  return in_b(MFS_SSR) & 0x3c;  // PE, FRE, ORE, RDRF
}

/* ��ʸ������ */
unsigned char serial_recv_byte(int index)
{
  unsigned char s, c;

  while (1) {

    /* ����ʸ�������ޤ��Ԥ� */
    while (!(s = serial_is_recv_enable(index)));

    /* ������λ */
    c = in_h(MFS_TDR_RDR);

    /* ���������ǡ����˥��顼��̵�����Ȥ�����å� */
    if (!(s & 0x38)) break;
    else out_b(MFS_SSR, 0x80);  /* ���顼�ե饰�򥯥ꥢ */
  }

  return c;
}

/* dummy functions for interrupt */

static int intr_send_enable = 0;
static int intr_recv_enable = 0;

int serial_intr_is_send_enable(int index)
{
  return intr_send_enable;
}

void serial_intr_send_enable(int index)
{
  intr_send_enable = 1;
}

void serial_intr_send_disable(int index)
{
  intr_send_enable = 0;
}

int serial_intr_is_recv_enable(int index)
{
  return intr_recv_enable;
}

void serial_intr_recv_enable(int index)
{
  intr_recv_enable = 1;
}

void serial_intr_recv_disable(int index)
{
  intr_recv_enable = 0;
}
