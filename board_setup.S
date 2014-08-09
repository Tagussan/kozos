#include "mb9bf618t_asm.h"

#define	base(x)		((x) & 0xffffff80)
#define	offset(x)	((x) & 0x0000007f)

	.section .text
	.align 0
	.thumb
	.thumb_func
	.global	board_setup
	.type reset_entry, %function
board_setup:	

disable_wdt:	// ハードウェアウォッチドッグタイマを停止させる
	ldr	r1, =WDG_LCK
	ldr	r0, =0x1acce551
	str	r0, [r1]
	mvn	r0, r0		// r0 = 0xe5331aae
	str	r0, [r1]
	ldr	r1, =WDG_CTL
	mov	r0, #0
	str	r0, [r1]

setup_pll:	// PLL の初期設定
	// リセット直後の高速CRクロックモードからPLLクロックモードに
	// 切り替え、各種クロックを以下のように設定する
	ldr	r1, =base(ClockResetBase)
	mov	r0, #0x00		// HCLK = Master Clock / 1
	str	r0, [r1, #offset(BSC_PSR)]
	mov	r0, #0x01		// PCLK0 = HCLK / 2
	str	r0, [r1, #offset(APBC0_PSR)]
	mov	r0, #0x81		// PCLK1 = HCLK / 2, PCLK1 enable
	str	r0, [r1, #offset(APBC1_PSR)]
	mov	r0, #0x81		// PCLK2 = HCLK / 2, PCLK2 enable
	str	r0, [r1, #offset(APBC2_PSR)]
	mov	r0, #0x83		// SWDOGCLK = PCLK0 / 8, TESTB=1
	str	r0, [r1, #offset(SWC_PSR)]
	mov	r0, #0x00		// TPIUCLK = HCLK
	str	r0, [r1, #offset(TTC_PSR)]
	mov	r0, #0x5c		// sub:~327ms, main:~33.0ms
	str	r0, [r1, #offset(CSW_TMR)]

	mov	r3, #0x02		// 高速CRモード, メインクロック発振許可
	mov	r2, r3
	str	r2, [r1, #offset(SCM_CTL)]
0:
	ldr	r0, [r1, #offset(SCM_STR)]
	tst	r0, r3
	beq	0b

	mov	r3, #0x08		// サブクロック発振許可
	orr	r2, r2, r3
	str	r2, [r1, #offset(SCM_CTL)]
1:
	ldr	r0, [r1, #offset(SCM_STR)]
	tst	r0, r3			// サブクロック安定待ち
	beq	1b

	mov	r0, #0x00		// pll:~128us
	str	r0, [r1, #offset(PSW_TMR)]
	mov	r0, #0x01		// PLLK=1, PLLM=2
	str	r0, [r1, #offset(PLL_CTL1)]
	mov	r0, #0x23		// PLLN=36
	str	r0, [r1, #offset(PLL_CTL2)]

	mov	r3, #0x10		// PLL発振許可
	orr	r2, r2, r3
	str	r2, [r1, #offset(SCM_CTL)]
2:
	ldr	r0, [r1, #offset(SCM_STR)]
	tst	r0, r3			// PLL安定待ち
	beq	2b

	mov	r3, #0x40		// PLLクロックモード
	orr	r2, r2, r3
	str	r2, [r1, #offset(SCM_CTL)]

	bx	lr

	.pool
