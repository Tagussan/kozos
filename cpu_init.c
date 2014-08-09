/***************************************************************
	CPU固有 各種初期化ルーチン(FM3/MB9BF618T用)
***************************************************************/


/* PLLクロック設定レジスタ定義 */
#define PLL_SCM_CTL   ((volatile unsigned char *)0x40010000)
#define PLL_SCM_STR   ((volatile unsigned char *)0x40010004)
#define PLL_BSC_PSR   ((volatile unsigned char *)0x40010010)
#define PLL_APBC0_PSR ((volatile unsigned char *)0x40010014)
#define PLL_APBC1_PSR ((volatile unsigned char *)0x40010018)
#define PLL_APBC2_PSR ((volatile unsigned char *)0x4001001C)
#define PLL_CSW_TMR   ((volatile unsigned char *)0x40010030)
#define PLL_PSW_TMR   ((volatile unsigned char *)0x40010034)
#define PLL_PLL_CTL1  ((volatile unsigned char *)0x40010038)
#define PLL_PLL_CTL2  ((volatile unsigned char *)0x4001003C)


/* ウォッチドッグタイマレジスタ定義 */
#define WDT_CTL     ((volatile unsigned int *)0x40011008)
#define WDT_LCK     ((volatile unsigned int *)0x40011C00)


/* CPU固有初期化処理 */
void CPU_Initialize(void)
{
	/* ウォッチドッグタイマディセーブル */
	*WDT_LCK = 0x1ACCE551;	/* ロック解除1 */
	*WDT_LCK = 0xE5331AAE;	/* ロック解除2 */
	*WDT_CTL = 0x00000000;	/* ディセーブル */


	/* PLLクロック設定(CPUコア144MHz) */
	/* メイン発振クロック起動 */
	*PLL_CSW_TMR = 0x4D;	/* サブ：164ms，メイン：131ms待ち時間 */
	*PLL_SCM_CTL = 0x02;	/* メインクロック発振開始 */
	while((*PLL_SCM_STR & 0x02)==0){}	/* 安定待ち */
	/* PLLクロック発振 */
	*PLL_PSW_TMR  = 0x06;	/* 8ms待ち時間 */
	*PLL_PLL_CTL1 = 0x01;	/* K=0(1-1),M=1(2-1) */
	*PLL_PLL_CTL2 = 35;		/* N=35(36-1) */
	*PLL_SCM_CTL = 0x12;	/* PLL発振開始 */
	while((*PLL_SCM_STR & 0x10)==0){}	/* 安定待ち */
	/* クロック分周設定 */
	*PLL_BSC_PSR   = 0x00;	/* ベースクロック1/1分周(144MHz) */
	*PLL_APBC0_PSR = 0x01;	/* APB0クロック1/2分周(72MHz) */
	*PLL_APBC1_PSR = 0x81;	/* APB1クロック1/2分周(72MHz) */
	*PLL_APBC2_PSR = 0x81;	/* APB2クロック1/2分周(72MHz) */
	/* クロック切り替え */
	*PLL_SCM_CTL = 0x52;	/* PLL発振クロック選択 */

}

