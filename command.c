#include "defines.h"
#include "kozos.h"
#include "consdrv.h"
#include "netdrv.h"
#include "icmp.h"
#include "tftp.h"
#include "xmodem.h"
#include "elf.h"
#include "lib.h"

/* ���󥽡��롦�ɥ饤�Фλ��ѳ��Ϥ򥳥󥽡��롦�ɥ饤�Ф˰��ꤹ�� */
static void send_use(int index)
{
  char *p;
  p = kz_kmalloc(3);
  p[0] = '0';
  p[1] = CONSDRV_CMD_USE;
  p[2] = '0' + index;
  kz_send(MSGBOX_ID_CONSOUTPUT, 3, p);
}

/* ���󥽡���ؤ�ʸ������Ϥ򥳥󥽡��롦�ɥ饤�Ф˰��ꤹ�� */
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

/* ping�γ��Ϥ�icmp�������˰��ꤹ�� */
static void send_icmp()
{
  struct netbuf *buf;
  buf = kz_kmalloc(sizeof(*buf));
  buf->cmd = ICMP_CMD_SEND;
  buf->option.icmp.send.number = 3;
  buf->option.icmp.send.ipaddr = 0xc0a80a01; /* 192.168.10.1 */
  kz_send(MSGBOX_ID_ICMPPROC, 0, (char *)buf);
}

/* tftp�γ��Ϥ�tftp�������˰��ꤹ�� */
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

/* �����16�ʥ���׽��� */
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
  extern int buffer_start; /* ��󥫡�������ץȤ��������Ƥ���Хåե� */
  unsigned char *loadbuf = (char *)(&buffer_start);

  if (!strcmp(buf, "load")) { /* XMODEM�ǤΥե�����Υ�������� */
    size = xmodem_recv(loadbuf);
    wait(); /* ž�����ץ꤬��λ��ü�����ץ�����椬���ޤ��Ԥ���碌�� */
    if (size < 0) {
      puts("\nXMODEM receive error!\n");
    } else {
      puts("\nXMODEM receive succeeded.\n");
    }
  } else if (!strcmp(buf, "dump")) { /* �����16�ʥ���׽��� */
    puts("size: ");
    putxval(size, 0);
    puts("\n");
    dump(loadbuf, size);
  } else if (!strcmp(buf, "run")) { /* ELF�����ե�����μ¹� */
    entry_point = elf_load(loadbuf); /* ������Ÿ��(����) */
    if (!entry_point) {
      puts("run error!\n");
    } else {
      puts("starting from entry point: ");
      putxval((unsigned long)entry_point, 0);
      puts("\n");
      f = (void (*)(void))entry_point;
      f(); /* �����ǡ����ɤ����ץ����˽������Ϥ� */
      /* �����ˤ��֤äƤ��ʤ� */
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
    send_write("kzload> "); /* �ץ��ץ�ɽ�� */
    serial_set_recv_enable();
    wrote++;
  }

  /* ���󥽡��뤫��μ���ʸ����������� */
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

    if (!strncmp(p, "echo", 4)) { /* echo���ޥ�� */
      send_write(p + 4); /* echo��³��ʸ�������Ϥ��� */
      send_write("\n");
    } else if (!strncmp(p, "ping", 4)) { /* ping���ޥ�� */
      send_write("ping start.\n");
      send_icmp();
    } else if (!strncmp(p, "tftp", 4)) { /* tftp���ޥ�� */
      send_write("tftp start.\n");
      send_tftp();
    } else if (!strncmp(p, "call", 4)) { /* ���ߡ��ؿ��θƤӽФ� */
      send_write(func(p + 4));
    } else {
      send_write("unknown.\n");
    }

    kz_kmfree(p);
  }

ret:
  return 0;
}
