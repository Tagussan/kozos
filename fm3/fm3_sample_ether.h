/*
 * fm3_sample_ether.h
 *
 *  Created on: 2012/02/26
 *      Author: Kentaro Sekimoto
 */

#ifndef FM3_SAMPLE_ETHER_H_
#define FM3_SAMPLE_ETHER_H_

#define MB9BF618T
#define SysFrePCLK2	(36000000)
#define	UART_CH	3
//#define ETH_CH0
#define ETH_CH1
#define	ICS1894
//#define LAN8187
//#define DEBUG_DUMP
#if 0
#define MY_MAC_ADDR0	{0x77, 0x77, 0x77, 0x11, 0x11, 0x11}
#define MY_MAC_ADDR1	{0x77, 0x77, 0x77, 0x22, 0x22, 0x22}
#else
#define MY_MAC_ADDR0	{0x00, 0x77, 0x77, 0x11, 0x11, 0x11}
#define MY_MAC_ADDR1	{0x00, 0x77, 0x77, 0x22, 0x22, 0x22}
#endif
#define	MY_IP_ADDR0	{192, 168, 1, 151}
#define	MY_IP_ADDR1	{192, 168, 1, 152}
#define	DST_IP_ADDR	{192, 168, 1, 2}

#endif /* FM3_SAMPLE_ETHER_H_ */
