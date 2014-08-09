CSPREFIX  = $(HOME)/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_EABI
#CSPREFIX  = $(HOME)/CodeSourcery/Sourcery_G++_Lite
#CSPREFIX  = /usr/local/cross
CSBINDIR  = $(CSPREFIX)/bin
PREFIX    = /usr
BINDIR    = $(PREFIX)/bin

ARCH      = arm-none-eabi
#ARCH      = arm-elf
ADDNAME   = $(ARCH)-

AR      = $(CSBINDIR)/$(ADDNAME)ar
AS      = $(CSBINDIR)/$(ADDNAME)as
CC      = $(CSBINDIR)/$(ADDNAME)gcc
LD      = $(CSBINDIR)/$(ADDNAME)ld
NM      = $(CSBINDIR)/$(ADDNAME)nm
OBJCOPY = $(CSBINDIR)/$(ADDNAME)objcopy
OBJDUMP = $(CSBINDIR)/$(ADDNAME)objdump
RANLIB  = $(CSBINDIR)/$(ADDNAME)ranlib
STRIP   = $(CSBINDIR)/$(ADDNAME)strip

LPC21ISP = $(BINDIR)/lpc21isp
SREC_CAT = $(BINDIR)/srec_cat

# FreeBSD-4.x:/dev/cuaaX, FreeBSD-6.x:/dev/cuadX, FreeBSD(USB):/dev/cuaUx
# Linux:/dev/ttySx, Linux(USB):/dev/ttyUSBx, Windows:comX
LPC21ISP_SERDEV = /dev/cuad0

OBJS  = startup.o board_setup.o serial.o main.o
OBJS += cpu_init.o
OBJS += monitor.o lib.o

OBJS += netdrv.o ethernet.o arp.o ip.o icmp.o tcp.o udp.o httpd.o tftp.o
OBJS += consdrv.o command.o
OBJS += kozos_single.o syscall.o memory.o ether_wrap.o
OBJS += xmodem.o elf.o
OBJS += fm3_ether.o

TARGET = kzload

CFLAGS = -Wall -march=armv7-m -mthumb -ffreestanding
#CFLAGS += -mcpu=cortex-m3
#CFLAGS += -mno-thumb-interwork
CFLAGS += -fno-builtin -nostdinc -nostdlib
CFLAGS += -I. -I./fm3
#CFLAGS += -g
CFLAGS += -Os
CFLAGS += -DKZLOAD

LFLAGS = -static -T ld.scr -L. 

.SUFFIXES: .c .o
.SUFFIXES: .s .o
.SUFFIXES: .S .o

all :		$(TARGET)

$(TARGET) :	$(OBJS)
		$(CC) $(OBJS) -o $(TARGET) $(CFLAGS) $(LFLAGS)
		cp $(TARGET) $(TARGET).elf
		$(STRIP) $(TARGET)

.c.o :		$<
		$(CC) -c $(CFLAGS) $<

.s.o :		$<
		$(CC) -c $(CFLAGS) $<

.S.o :		$<
		$(CC) -c $(CFLAGS) $<

$(TARGET).mot :	$(TARGET)
		$(OBJCOPY) -O srec $(TARGET) $(TARGET).mot

$(TARGET).hex :	$(TARGET)
		$(OBJCOPY) -O ihex $(TARGET) $(TARGET).hex

image :		$(TARGET).mot $(TARGET).hex

write :		$(TARGET).hex
		$(LPC21ISP) $(TARGET).hex $(LPC21ISP_SERDEV) 115200 12000
clean :
		rm -f $(OBJS) $(TARGET) $(TARGET).elf $(TARGET).mot $(TARGET).hex
