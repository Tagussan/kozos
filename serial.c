int serial_init(int index)
{ 
  return 0;
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

int serial_is_recv_enable(int index)
{
  return 0;
}

unsigned char serial_recv_byte(int index)
{
  return '0';
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
