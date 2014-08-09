#include "defines.h"
#include "netdrv.h"
#include "ethernet.h"
#include "fm3_ether.h"
#include "fm3_sample_ether.h"

#define CH_MAX  2
unsigned char MyMACAddr[CH_MAX][6] = {
  MY_MAC_ADDR0,
  MY_MAC_ADDR1
};

#if !defined(ETH_CH0) && !defined(ETH_CH1)
#error ETH_CH not defined.
#endif
#ifdef ETH_CH0
#define ETHERNET_MACADDR (MyMACAddr[0])
#define ETHERNET_MAC FM3_ETHERNET_MAC0
#endif
#ifdef ETH_CH1
#define ETHERNET_MACADDR (MyMACAddr[1])
#define ETHERNET_MAC FM3_ETHERNET_MAC1
#endif

EMAC_DMA_RXDESC *RXDESC_Received(void);
void EtherInit(unsigned char *pmac);
void Packet_Send(unsigned char *p, unsigned int size);
int Packet_Recv(unsigned char *p);

int ether_init(int index, unsigned char macaddr[])
{
  memcpy(macaddr, &ETHERNET_MACADDR, MACADDR_SIZE);
  Ether_Init(macaddr);
  return 0;
}

static int intr_send_enable = 0;
static int intr_recv_enable = 0;

int ether_intr_is_send_enable(int index)
{
  return intr_send_enable;
}

void ether_intr_send_enable(int index)
{
  intr_send_enable = 1;
}

void ether_intr_send_disable(int index)
{
  intr_send_enable = 0;
}

int ether_intr_is_recv_enable(int index)
{
  return intr_recv_enable;
}

void ether_intr_recv_enable(int index)
{
  intr_recv_enable = 1;
}

void ether_intr_recv_disable(int index)
{
  intr_recv_enable = 0;
}

int ether_is_send_enable(int index)
{
  FM3_ETHERNET_MAC_TypeDef *pethmac = ETHERNET_MAC;
  unsigned int dma_sr = pethmac->SR;
  return (dma_sr & DMA_SR_TU) ? 1 : 0;
}

int ether_is_recv_enable(int index)
{
  FM3_ETHERNET_MAC_TypeDef *pethmac = ETHERNET_MAC;
  unsigned int dma_sr = pethmac->SR;
  return (dma_sr & DMA_SR_RI) ? 1 : 0;
}

int ether_intr_clear(int index)
{
  return 0;
}

int ether_intr_clear_send(int index)
{
  FM3_ETHERNET_MAC_TypeDef *pethmac = ETHERNET_MAC;
  unsigned int dma_sr = pethmac->SR;
  pethmac->SR |= DMA_SR_TU;
  return 0;
}

int ether_intr_clear_recv(int index)
{
  FM3_ETHERNET_MAC_TypeDef *pethmac = ETHERNET_MAC;
  unsigned int dma_sr = pethmac->SR;
  pethmac->SR |= DMA_SR_RI;
  return 0;
}

int ether_recv(int index, char *buf)
{
  return Packet_Recv(buf);
}

int ether_send(int index, int size, char *buf)
{
  Packet_Send(buf, size);
  return 0;
}

void debug_printf()
{
  return;
}
