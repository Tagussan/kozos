#include "defines.h"
#include "kozos.h"
#include "consdrv.h"
#include "netdrv.h"
#include "icmp.h"
#include "tftp.h"
#include "xmodem.h"
#include "elf.h"
#include "lib.h"

/* コンソール・ドライバの使用開始をコンソール・ドライバに依頼する */
static void send_use(int index)
{
  char *p;
  p = kz_kmalloc(3);
  p[0] = '0';
  p[1] = CONSDRV_CMD_USE;
  p[2] = '0' + index;
  kz_send(MSGBOX_ID_CONSOUTPUT, 3, p);
}

/* コンソールへの文字列出力をコンソール・ドライバに依頼する */
static void send_write(char *str)
{
  char *p;
  int len;
  len = strlen(str);
  p = kz_kmalloc(len + 2);
  p[0] = '0';
  p[1] = CONSDRV_CMD_WRITE;
  memcpy(&p[2], str, len);
  kz_send(MSGBOX_ID_CONSOUTPUT, len + 2, p);
}

/* pingの開始をicmpタスクに依頼する */
static void send_icmp()
{
  struct netbuf *buf;
  buf = kz_kmalloc(sizeof(*buf));
  buf->cmd = ICMP_CMD_SEND;
  buf->option.icmp.send.number = 3;
  buf->option.icmp.send.ipaddr = 0xc0a80a01; /* 192.168.10.1 */
  kz_send(MSGBOX_ID_ICMPPROC, 0, (char *)buf);
}

/* tftpの開始をtftpタスクに依頼する */
static void send_tftp()
{
  struct netbuf *buf;
  buf = kz_kmalloc(sizeof(*buf));
  buf->cmd = TFTP_CMD_START;
  buf->option.tftp.start.ipaddr = 0xc0a80a01; /* 192.168.10.1 */
  kz_send(MSGBOX_ID_TFTP, 0, (char *)buf);
}

char *func(char *str)
{
  static char buf[32];
  strcpy(buf, str);
  return buf;
}

/* メモリの16進ダンプ出力 */
static int dump(char *buf, long size)
{
  long i;

  if (size < 0) {
    puts("no data.\n");
    return -1;
  }
  for (i = 0; i < size; i++) {
    putxval(buf[i], 2);
    if ((i & 0xf) == 15) {
      puts("\n");
    } else {
      if ((i & 0xf) == 7) puts(" ");
      puts(" ");
    }
  }
  puts("\n");

  return 0;
}

static void wait()
{
  volatile long i;
  for (i = 0; i < 15000; i++)
    ;
}

static int bootload_main(char *buf)
{
  static long size = -1;
  char *entry_point;
  void (*f)(void);
  extern int buffer_start; /* リンカ・スクリプトで定義されているバッファ */
  unsigned char *loadbuf = (char *)(&buffer_start);

  if (!strcmp(buf, "load")) { /* XMODEMでのファイルのダウンロード */
    size = xmodem_recv(loadbuf);
    wait(); /* 転送アプリが終了し端末アプリに制御が戻るまで待ち合わせる */
    if (size < 0) {
      puts("\nXMODEM receive error!\n");
    } else {
      puts("\nXMODEM receive succeeded.\n");
    }
  } else if (!strcmp(buf, "dump")) { /* メモリの16進ダンプ出力 */
    puts("size: ");
    putxval(size, 0);
    puts("\n");
    dump(loadbuf, size);
  } else if (!strcmp(buf, "run")) { /* ELF形式ファイルの実行 */
    entry_point = elf_load(loadbuf); /* メモリ上に展開(ロード) */
    if (!entry_point) {
      puts("run error!\n");
    } else {
      puts("starting from entry point: ");
      putxval((unsigned long)entry_point, 0);
      puts("\n");
      f = (void (*)(void))entry_point;
      f(); /* ここで，ロードしたプログラムに処理を渡す */
      /* ここには返ってこない */
    }
  }

  return 0;
}

void bootload_ready(char *p, int size)
{
  char buf[16];
  memcpy(buf, p, size);
  bootload_main(buf);
}

int command_main(int argc, char *argv[])
{
  char *p;
  int size;
  static int initialized = 0;
  static int wrote = 0;

  if (!initialized) {
    send_use(SERIAL_DEFAULT_DEVICE);

    initialized++;
  }

  if (!wrote) {
    send_write("kzload> "); /* プロンプト表示 */
    serial_set_recv_enable();
    wrote++;
  }

  /* コンソールからの受信文字列を受け取る */
  if (kz_recv(MSGBOX_ID_CONSINPUT, &size, &p) != -1) {
    if (p == NULL) {
      send_write("expired.\n");
      goto ret;
    }
    p[size] = '\0';
    wrote = 0;
    puts("received");
    //bootload_main(p);
    bootload_ready(p,size);

    if (!strncmp(p, "echo", 4)) { /* echoコマンド */
      send_write(p + 4); /* echoに続く文字列を出力する */
      send_write("\n");
    } else if (!strncmp(p, "ping", 4)) { /* pingコマンド */
      send_write("ping start.\n");
      send_icmp();
    } else if (!strncmp(p, "tftp", 4)) { /* tftpコマンド */
      send_write("tftp start.\n");
      send_tftp();
    } else if (!strncmp(p, "call", 4)) { /* ダミー関数の呼び出し */
      send_write(func(p + 4));
    } else {
      send_write("unknown.\n");
    }

    kz_kmfree(p);
  }

ret:
  return 0;
}
