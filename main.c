#include "serial.h"
#include "monitor.h"
#include "cpu_init.h"
#include "kozos.h"
#define dbg
static int start_threads(int argc, char *argv[])
{
  static int initialized = 0;

  if (initialized)
    return 0;
  initialized++;

  kz_run(consdrv_main,  "consdrv",  1, 0x100, 0, NULL);
  kz_run(command_main,  "command",  8, 0x100, 0, NULL);
#ifndef dbg
  kz_run(netdrv_main,   "netdrv",  10, 0x100, 0, NULL);
  kz_run(ethernet_main, "ethernet",11, 0x100, 0, NULL);
  kz_run(arp_main,      "arp",     11, 0x100, 0, NULL);
  kz_run(ip_main,       "ip",      12, 0x100, 0, NULL);
  kz_run(icmp_main,     "icmp",    12, 0x100, 0, NULL);
  kz_run(tcp_main,      "tcp",     12, 0x100, 0, NULL);
  kz_run(udp_main,      "udp",     12, 0x100, 0, NULL);
  kz_run(httpd_main,    "httpd",   14, 0x100, 0, NULL);
  kz_run(tftp_main,     "tftp",    14, 0x100, 0, NULL);
#endif
  kz_chpri(15); /* 優先順位を下げて，アイドルスレッドに移行する */
  INTR_ENABLE; /* 割込み有効にする */
#if 0
  while (1) {
    asm volatile ("sleep"); /* 省電力モードに移行 */
  }
#endif

  return 0;
}

#include "mb9bf618t.h"

static void init()
{
  char *d, *s;
  extern char _data_org, _data_start, _edata, _bss_start, _ebss;
  int len;

  d = &_data_start;
  s = &_data_org;
  len = (long)&_edata - (long)&_data_start;
  for (; len > 0; len--) {
    *(d++) = *(s++);
  }

  d = &_bss_start;
  len = (long)&_ebss - (long)&_bss_start;
  for (; len > 0; len--) {
    *(d++) = 0;
  }
}

int main (void)
{
#ifndef dbg
  CPU_Initialize();
#endif
  init();
#ifndef dbg
  FM3_GPIO->PFRF_f.P3 = 0;
  FM3_GPIO->PZRF_f.P3 = 1;
  FM3_GPIO->DDRF_f.P3 = 1;
  FM3_GPIO->PDORF_f.P3 = 0;
#endif
  serial_init(0);
  puts("Booting...\n");

#if 0
  while (1) monitor_main();
#else
  kz_start(start_threads, "idle", 0, 0x100, 0, NULL);
#endif

  return 0;
}
