#ifndef _ETHER_H_INCLUDED_
#define _ETHER_H_INCLUDED_

int ether_init(int index, unsigned char macaddr[]);
char *ether_macaddr(int index);
int ether_intr_is_send_enable(int index);
void ether_intr_send_enable(int index);
void ether_intr_send_disable(int index);
int ether_intr_is_recv_enable(int index);
void ether_intr_recv_enable(int index);
void ether_intr_recv_disable(int index);
int ether_is_send_enable(int index);
int ether_is_recv_enable(int index);
int ether_intr_clear(int index);
int ether_intr_clear_send(int index);
int ether_intr_clear_recv(int index);
int ether_recv(int index, char *buf);
int ether_send(int index, int size, char *buf);

#endif
