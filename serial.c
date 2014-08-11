int sys_len_test();
void disp_integer(int input){
  int a = input;
  putc(a / 1000 + '0');
  a %= 1000;
  putc(a / 100 + '0');
  a %= 100;
  putc(a / 10 + '0');
  a %= 10;
  putc(a + '0');
}

int serial_is_send_enable(int index)
{
  return 1;
}

char serial_send_tmp;
int serial_send_byte(int index, unsigned char c)
{
  serial_send_tmp = c;
  volatile int args = (int)&serial_send_tmp;
  __asm__(
    "movs r0, #0x03\n\t"
    "movs r1, %[Rd]\n\t"
    "bkpt #0xab"
    :
    : [Rd] "r" (args)
    : "r0","r1"
  );
  return 0;
}

int sys_len_buff;
int sys_len_test()
{
  volatile int arg = (int)&sys_len_buff;
  __asm__ (
    "movs r0, #0x0c\n\t"
    "movs r1, %[Rd]\n\t"
    "bkpt #0xab"
    :
    : [Rd] "r" (arg)
    : "r0","r1"
  );
  return sys_len_buff;
}

int is_serial_recv_enable;
int serial_set_recv_enable()
{
  is_serial_recv_enable = 1;
  return 0;
}
int serial_init(int index)
{
  is_serial_recv_enable = 0;
  return 0;
}
int serial_is_recv_enable(int index)
{
  if(!is_serial_recv_enable)
  {
    return 0;
  }
  is_serial_recv_enable = 0;
  return 1;
}

char serial_read_buff[9];
unsigned char serial_recv_byte(int index)
{
  volatile int p = (int)&serial_read_buff;
  volatile int args[3];
  args[0] = 0;
  args[1] = p;
  args[2] = 8;
  __asm__ (
    "movs r0, #0x06\n\t"
    "movs r1, %[Rd]\n\t"
    "bkpt #0xab"
    :
    : [Rd] "r" (args)
    : "r0","r1"
  );
  return serial_read_buff[0];
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
