#include "mb9bf618t_asm.h"

#define PCLK2   72000000        // PCLK2周波数 (Hz)
#define BPS     38400           // 通信速度 (bps)

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

/* デバイス初期化 */
int serial_init(int index)
{
#if !defined(USE_CH3) && !defined(USE_CH4)
#error Serial channel undefined.
#endif
  // リロケートピンの設定
#ifdef USE_CH3
  out_w(GPIO_EPFR07, in_w(GPIO_EPFR07) | 0x03c00000);
  out_w(GPIO_PFR4, in_w(GPIO_PFR4) | 0x00000300);
#endif
#ifdef USE_CH4
  out_w(GPIO_EPFR08, in_w(GPIO_EPFR08) | 0x000000f0);
                                        // SIN4_2, SOT4_2を使用
  out_w(GPIO_PFR0, (in_w(GPIO_PFR0) & ~0x000000f0) | 0x00000060);
                                        // P06, P05を周辺機能とする
#endif

  // シリアルインタフェースの設定
  out_b(MFS_SCR, 0x80);                 // リセット、割込禁止、送受信禁止
  out_b(MFS_SMR, 0x01);                 // UART, 1 stop bit, LSB first
  out_b(MFS_ESCR, 0x00);                // NRZ, no parity, 8bit
  out_h(MFS_BGR, PCLK2 / BPS - 1);      // 通信速度設定
  out_b(MFS_FCR0, 0x00);                // FIFOは使用しない
  out_b(MFS_SCR, 0x03);                 // 送受信許可

  return 0;
}

/* 送信可能か？ */
int serial_is_send_enable(int index)
{
  return in_b(MFS_SSR) & 0x02;  // TDRE
}

/* １文字送信 */
int serial_send_byte(int index, unsigned char c)
{
  /* 送信可能になるまで待つ */
  while (!serial_is_send_enable(index));

  /* 送信開始 */
  out_h(MFS_TDR_RDR, c);

  return 0;
}

/* 受信可能か？ */
int serial_is_recv_enable(int index)
{
  return in_b(MFS_SSR) & 0x3c;  // PE, FRE, ORE, RDRF
}

/* １文字受信 */
unsigned char serial_recv_byte(int index)
{
  unsigned char s, c;

  while (1) {

    /* 受信文字が来るまで待つ */
    while (!(s = serial_is_recv_enable(index)));

    /* 受信完了 */
    c = in_h(MFS_TDR_RDR);

    /* 受信したデータにエラーが無いことをチェック */
    if (!(s & 0x38)) break;
    else out_b(MFS_SSR, 0x80);  /* エラーフラグをクリア */
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
