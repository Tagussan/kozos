/*
 * fm3_exti.h
 *
 *  Created on: 2012/03/04
 *      Author: share
 */

#ifndef FM3_EXTI_H_
#define FM3_EXTI_H_

#define FM3_EXTI_PRIORITY	11

// PA4 - INT03_0
// P45 - INT10_2

// ENIR - �O�������݋����W�X�^[ENIR : ENable Interrupt request Register]
// 0 �O�������ݗv���̔������֎~���܂�
// 1 �O�������ݗv���̔����������܂�

// EIRR - �O�������ݗv�����W�X�^[EIRR : External Interrupt Request Register]
// 0 �O�������ݗv�����o�Ȃ�
// 1 �O�������ݗv�����o����

// EICL - �O�������ݗv���N���A���W�X�^[EICL: External Interrupt CLear register]
// 0 �����ݎ��O�������ݗv�����N���A���܂�
// 1 �����ݎ��e�����܂���

// ELVR - �O�������ݗv�����x�����W�X�^[ELVR : External interrupt LeVel Register]
// LBx LAx ����
// 0 0 "L"���x�������o
// 0 1 "H"���x�������o
// 1 0 �����G�b�W�����o
// 1 1 ������G�b�W�����o

// ELVR1 - �O�������ݗv�����x�����W�X�^1 [ELVR1 : External interrupt LeVel Register 1]
// LBx LAx ����
// 0 0 "L"���x�������o
// 0 1 "H"���x�������o
// 1 0 �����G�b�W�����o
// 1 1 ������G�b�W�����o

// NMIRR - �}�X�N�s�\�����ݗv�����W�X�^[NMIRR : Non Maskable Interrupt Request Register]
// 0 NMI �����ݗv�����o�Ȃ�
// 1 NMI �����ݗv�����o����

// NIMCL - �}�X�N�s�\�����ݗv���N���A���W�X�^[NMICL: Non Maskable Interrupt CLear register]
// 0 �����ݎ�NMI �����ݗv�����N���A���܂�
// 1 �����ݎ��e�����܂���
// �Ǐo�������"1"���ǂݏo����܂�

void EXTI_Init(void);
#ifdef __GCC__
void INT0_7_Handler(void) __attribute__((interrupt));
void INT8_15_Handler(void) __attribute__((interrupt));
#else
void INT0_7_Handler(void);
void INT8_15_Handler(void);
#endif

#endif /* FM3_EXTI_H_ */
