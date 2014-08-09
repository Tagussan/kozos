#define __IO volatile

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

/* GPIO_MODULE register bit fields */
typedef struct stc_gpio_pfr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pfr0_field_t;

typedef struct stc_gpio_pfr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pfr1_field_t;

typedef struct stc_gpio_pfr2_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pfr2_field_t;

typedef struct stc_gpio_pfr3_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pfr3_field_t;

typedef struct stc_gpio_pfr4_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_pfr4_field_t;

typedef struct stc_gpio_pfr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
} stc_gpio_pfr5_field_t;

typedef struct stc_gpio_pfr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pfr6_field_t;

typedef struct stc_gpio_pfr7_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pfr7_field_t;

typedef struct stc_gpio_pfr8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pfr8_field_t;

typedef struct stc_gpio_pfr9_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pfr9_field_t;

typedef struct stc_gpio_pfra_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pfra_field_t;

typedef struct stc_gpio_pfrb_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
} stc_gpio_pfrb_field_t;

typedef struct stc_gpio_pfrc_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pfrc_field_t;

typedef struct stc_gpio_pfrd_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pfrd_field_t;

typedef struct stc_gpio_pfre_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pfre_field_t;

typedef struct stc_gpio_pfrf_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
} stc_gpio_pfrf_field_t;

typedef struct stc_gpio_pcr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pcr0_field_t;

typedef struct stc_gpio_pcr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pcr1_field_t;

typedef struct stc_gpio_pcr2_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pcr2_field_t;

typedef struct stc_gpio_pcr3_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pcr3_field_t;

typedef struct stc_gpio_pcr4_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_pcr4_field_t;

typedef struct stc_gpio_pcr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
} stc_gpio_pcr5_field_t;

typedef struct stc_gpio_pcr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pcr6_field_t;

typedef struct stc_gpio_pcr7_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pcr7_field_t;

typedef struct stc_gpio_pcr9_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pcr9_field_t;

typedef struct stc_gpio_pcra_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pcra_field_t;

typedef struct stc_gpio_pcrb_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
} stc_gpio_pcrb_field_t;

typedef struct stc_gpio_pcrc_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pcrc_field_t;

typedef struct stc_gpio_pcrd_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pcrd_field_t;

typedef struct stc_gpio_pcre_field
{
       uint32_t RESERVED1  : 2;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pcre_field_t;

typedef struct stc_gpio_ddr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_ddr0_field_t;

typedef struct stc_gpio_ddr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_ddr1_field_t;

typedef struct stc_gpio_ddr2_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_ddr2_field_t;

typedef struct stc_gpio_ddr3_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_ddr3_field_t;

typedef struct stc_gpio_ddr4_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_ddr4_field_t;

typedef struct stc_gpio_ddr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
} stc_gpio_ddr5_field_t;

typedef struct stc_gpio_ddr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_ddr6_field_t;

typedef struct stc_gpio_ddr7_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_ddr7_field_t;

typedef struct stc_gpio_ddr8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_ddr8_field_t;

typedef struct stc_gpio_ddr9_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_ddr9_field_t;

typedef struct stc_gpio_ddra_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_ddra_field_t;

typedef struct stc_gpio_ddrb_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
} stc_gpio_ddrb_field_t;

typedef struct stc_gpio_ddrc_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_ddrc_field_t;

typedef struct stc_gpio_ddrd_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_ddrd_field_t;

typedef struct stc_gpio_ddre_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_ddre_field_t;

typedef struct stc_gpio_ddrf_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
} stc_gpio_ddrf_field_t;

typedef struct stc_gpio_pdir0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pdir0_field_t;

typedef struct stc_gpio_pdir1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdir1_field_t;

typedef struct stc_gpio_pdir2_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pdir2_field_t;

typedef struct stc_gpio_pdir3_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdir3_field_t;

typedef struct stc_gpio_pdir4_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_pdir4_field_t;

typedef struct stc_gpio_pdir5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
} stc_gpio_pdir5_field_t;

typedef struct stc_gpio_pdir6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pdir6_field_t;

typedef struct stc_gpio_pdir7_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdir7_field_t;

typedef struct stc_gpio_pdir8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdir8_field_t;

typedef struct stc_gpio_pdir9_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pdir9_field_t;

typedef struct stc_gpio_pdira_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pdira_field_t;

typedef struct stc_gpio_pdirb_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
} stc_gpio_pdirb_field_t;

typedef struct stc_gpio_pdirc_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdirc_field_t;

typedef struct stc_gpio_pdird_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdird_field_t;

typedef struct stc_gpio_pdire_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdire_field_t;

typedef struct stc_gpio_pdirf_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
} stc_gpio_pdirf_field_t;

typedef struct stc_gpio_pdor0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pdor0_field_t;

typedef struct stc_gpio_pdor1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdor1_field_t;

typedef struct stc_gpio_pdor2_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pdor2_field_t;

typedef struct stc_gpio_pdor3_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdor3_field_t;

typedef struct stc_gpio_pdor4_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_pdor4_field_t;

typedef struct stc_gpio_pdor5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
} stc_gpio_pdor5_field_t;

typedef struct stc_gpio_pdor6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pdor6_field_t;

typedef struct stc_gpio_pdor7_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdor7_field_t;

typedef struct stc_gpio_pdor8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdor8_field_t;

typedef struct stc_gpio_pdor9_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pdor9_field_t;

typedef struct stc_gpio_pdora_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pdora_field_t;

typedef struct stc_gpio_pdorb_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
} stc_gpio_pdorb_field_t;

typedef struct stc_gpio_pdorc_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdorc_field_t;

typedef struct stc_gpio_pdord_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdord_field_t;

typedef struct stc_gpio_pdore_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdore_field_t;

typedef struct stc_gpio_pdorf_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
} stc_gpio_pdorf_field_t;

typedef struct stc_gpio_ade_field
{
  __IO uint32_t AN0        : 1;
  __IO uint32_t AN1        : 1;
  __IO uint32_t AN2        : 1;
  __IO uint32_t AN3        : 1;
  __IO uint32_t AN4        : 1;
  __IO uint32_t AN5        : 1;
  __IO uint32_t AN6        : 1;
  __IO uint32_t AN7        : 1;
  __IO uint32_t AN8        : 1;
  __IO uint32_t AN9        : 1;
  __IO uint32_t AN10       : 1;
  __IO uint32_t AN11       : 1;
  __IO uint32_t AN12       : 1;
  __IO uint32_t AN13       : 1;
  __IO uint32_t AN14       : 1;
  __IO uint32_t AN15       : 1;
  __IO uint32_t AN16       : 1;
  __IO uint32_t AN17       : 1;
  __IO uint32_t AN18       : 1;
  __IO uint32_t AN19       : 1;
  __IO uint32_t AN20       : 1;
  __IO uint32_t AN21       : 1;
  __IO uint32_t AN22       : 1;
  __IO uint32_t AN23       : 1;
  __IO uint32_t AN24       : 1;
  __IO uint32_t AN25       : 1;
  __IO uint32_t AN26       : 1;
  __IO uint32_t AN27       : 1;
  __IO uint32_t AN28       : 1;
  __IO uint32_t AN29       : 1;
  __IO uint32_t AN30       : 1;
  __IO uint32_t AN31       : 1;
} stc_gpio_ade_field_t;

typedef struct stc_gpio_spsr_field
{
  __IO uint32_t SUBXC      : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t MAINXC     : 1;
       uint32_t RESERVED2  : 1;
  __IO uint32_t USB0C      : 1;
  __IO uint32_t USB1C      : 1;
} stc_gpio_spsr_field_t;

typedef struct stc_gpio_epfr00_field
{
  __IO uint32_t NMIS       : 1;
  __IO uint32_t CROUTE0    : 1;
  __IO uint32_t CROUTE1    : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t SUBOUTE0   : 1;
  __IO uint32_t SUBOUTE1   : 1;
       uint32_t RESERVED2  : 1;
  __IO uint32_t USBP0E     : 1;
       uint32_t RESERVED3  : 3;
  __IO uint32_t USBP1E     : 1;
       uint32_t RESERVED4  : 2;
  __IO uint32_t JTAGEN0B   : 1;
  __IO uint32_t JTAGEN1S   : 1;
       uint32_t RESERVED5  : 6;
  __IO uint32_t TRC0E      : 1;
  __IO uint32_t TRC1E      : 1;
} stc_gpio_epfr00_field_t;

typedef struct stc_gpio_epfr01_field
{
  __IO uint32_t RTO00E0    : 1;
  __IO uint32_t RTO00E1    : 1;
  __IO uint32_t RTO01E0    : 1;
  __IO uint32_t RTO01E1    : 1;
  __IO uint32_t RTO02E0    : 1;
  __IO uint32_t RTO02E1    : 1;
  __IO uint32_t RTO03E0    : 1;
  __IO uint32_t RTO03E1    : 1;
  __IO uint32_t RTO04E0    : 1;
  __IO uint32_t RTO04E1    : 1;
  __IO uint32_t RTO05E0    : 1;
  __IO uint32_t RTO05E1    : 1;
  __IO uint32_t DTTI0C     : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t DTTI0S0    : 1;
  __IO uint32_t DTTI0S1    : 1;
  __IO uint32_t FRCK0S0    : 1;
  __IO uint32_t FRCK0S1    : 1;
  __IO uint32_t IC00S0     : 1;
  __IO uint32_t IC00S1     : 1;
  __IO uint32_t IC00S2     : 1;
  __IO uint32_t IC01S0     : 1;
  __IO uint32_t IC01S1     : 1;
  __IO uint32_t IC01S2     : 1;
  __IO uint32_t IC02S0     : 1;
  __IO uint32_t IC02S1     : 1;
  __IO uint32_t IC02S2     : 1;
  __IO uint32_t IC03S0     : 1;
  __IO uint32_t IC03S1     : 1;
  __IO uint32_t IC03S2     : 1;
} stc_gpio_epfr01_field_t;

typedef struct stc_gpio_epfr02_field
{
  __IO uint32_t RTO10E0    : 1;
  __IO uint32_t RTO10E1    : 1;
  __IO uint32_t RTO11E0    : 1;
  __IO uint32_t RTO11E1    : 1;
  __IO uint32_t RTO12E0    : 1;
  __IO uint32_t RTO12E1    : 1;
  __IO uint32_t RTO13E0    : 1;
  __IO uint32_t RTO13E1    : 1;
  __IO uint32_t RTO14E0    : 1;
  __IO uint32_t RTO14E1    : 1;
  __IO uint32_t RTO15E0    : 1;
  __IO uint32_t RTO15E1    : 1;
  __IO uint32_t DTTI1C     : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t DTTI1S0    : 1;
  __IO uint32_t DTTI1S1    : 1;
  __IO uint32_t FRCK1S0    : 1;
  __IO uint32_t FRCK1S1    : 1;
  __IO uint32_t IC10S0     : 1;
  __IO uint32_t IC10S1     : 1;
  __IO uint32_t IC10S2     : 1;
  __IO uint32_t IC11S0     : 1;
  __IO uint32_t IC11S1     : 1;
  __IO uint32_t IC11S2     : 1;
  __IO uint32_t IC12S0     : 1;
  __IO uint32_t IC12S1     : 1;
  __IO uint32_t IC12S2     : 1;
  __IO uint32_t IC13S0     : 1;
  __IO uint32_t IC13S1     : 1;
  __IO uint32_t IC13S2     : 1;
} stc_gpio_epfr02_field_t;

typedef struct stc_gpio_epfr03_field
{
  __IO uint32_t RTO20E0    : 1;
  __IO uint32_t RTO20E1    : 1;
  __IO uint32_t RTO21E0    : 1;
  __IO uint32_t RTO21E1    : 1;
  __IO uint32_t RTO22E0    : 1;
  __IO uint32_t RTO22E1    : 1;
  __IO uint32_t RTO23E0    : 1;
  __IO uint32_t RTO23E1    : 1;
  __IO uint32_t RTO24E0    : 1;
  __IO uint32_t RTO24E1    : 1;
  __IO uint32_t RTO25E0    : 1;
  __IO uint32_t RTO25E1    : 1;
  __IO uint32_t DTTI2C     : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t DTTI2S0    : 1;
  __IO uint32_t DTTI2S1    : 1;
  __IO uint32_t FRCK2S0    : 1;
  __IO uint32_t FRCK2S1    : 1;
  __IO uint32_t IC20S0     : 1;
  __IO uint32_t IC20S1     : 1;
  __IO uint32_t IC20S2     : 1;
  __IO uint32_t IC21S0     : 1;
  __IO uint32_t IC21S1     : 1;
  __IO uint32_t IC21S2     : 1;
  __IO uint32_t IC22S0     : 1;
  __IO uint32_t IC22S1     : 1;
  __IO uint32_t IC22S2     : 1;
  __IO uint32_t IC23S0     : 1;
  __IO uint32_t IC23S1     : 1;
  __IO uint32_t IC23S2     : 1;
} stc_gpio_epfr03_field_t;

typedef struct stc_gpio_epfr04_field
{
       uint32_t RESERVED1  : 2;
  __IO uint32_t TIOA0E0    : 1;
  __IO uint32_t TIOA0E1    : 1;
  __IO uint32_t TIOB0S0    : 1;
  __IO uint32_t TIOB0S1    : 1;
       uint32_t RESERVED2  : 2;
  __IO uint32_t TIOA1S0    : 1;
  __IO uint32_t TIOA1S1    : 1;
  __IO uint32_t TIOA1E0    : 1;
  __IO uint32_t TIOA1E1    : 1;
  __IO uint32_t TIOB1S0    : 1;
  __IO uint32_t TIOB1S1    : 1;
       uint32_t RESERVED3  : 4;
  __IO uint32_t TIOA2E0    : 1;
  __IO uint32_t TIOA2E1    : 1;
  __IO uint32_t TIOB2S0    : 1;
  __IO uint32_t TIOB2S1    : 1;
       uint32_t RESERVED4  : 2;
  __IO uint32_t TIOA3S0    : 1;
  __IO uint32_t TIOA3S1    : 1;
  __IO uint32_t TIOA3E0    : 1;
  __IO uint32_t TIOA3E1    : 1;
  __IO uint32_t TIOB3S0    : 1;
  __IO uint32_t TIOB3S1    : 1;
} stc_gpio_epfr04_field_t;

typedef struct stc_gpio_epfr05_field
{
       uint32_t RESERVED1  : 2;
  __IO uint32_t TIOA4E0    : 1;
  __IO uint32_t TIOA4E1    : 1;
  __IO uint32_t TIOB4S0    : 1;
  __IO uint32_t TIOB4S1    : 1;
       uint32_t RESERVED2  : 2;
  __IO uint32_t TIOA5S0    : 1;
  __IO uint32_t TIOA5S1    : 1;
  __IO uint32_t TIOA5E0    : 1;
  __IO uint32_t TIOA5E1    : 1;
  __IO uint32_t TIOB5S0    : 1;
  __IO uint32_t TIOB5S1    : 1;
       uint32_t RESERVED3  : 4;
  __IO uint32_t TIOA6E0    : 1;
  __IO uint32_t TIOA6E1    : 1;
  __IO uint32_t TIOB6S0    : 1;
  __IO uint32_t TIOB6S1    : 1;
       uint32_t RESERVED4  : 2;
  __IO uint32_t TIOA7S0    : 1;
  __IO uint32_t TIOA7S1    : 1;
  __IO uint32_t TIOA7E0    : 1;
  __IO uint32_t TIOA7E1    : 1;
  __IO uint32_t TIOB7S0    : 1;
  __IO uint32_t TIOB7S1    : 1;
} stc_gpio_epfr05_field_t;

typedef struct stc_gpio_epfr06_field
{
  __IO uint32_t EINT00S0   : 1;
  __IO uint32_t EINT00S1   : 1;
  __IO uint32_t EINT01S0   : 1;
  __IO uint32_t EINT01S1   : 1;
  __IO uint32_t EINT02S0   : 1;
  __IO uint32_t EINT02S1   : 1;
  __IO uint32_t EINT03S0   : 1;
  __IO uint32_t EINT03S1   : 1;
  __IO uint32_t EINT04S0   : 1;
  __IO uint32_t EINT04S1   : 1;
  __IO uint32_t EINT05S0   : 1;
  __IO uint32_t EINT05S1   : 1;
  __IO uint32_t EINT06S0   : 1;
  __IO uint32_t EINT06S1   : 1;
  __IO uint32_t EINT07S0   : 1;
  __IO uint32_t EINT07S1   : 1;
  __IO uint32_t EINT08S0   : 1;
  __IO uint32_t EINT08S1   : 1;
  __IO uint32_t EINT09S0   : 1;
  __IO uint32_t EINT09S1   : 1;
  __IO uint32_t EINT10S0   : 1;
  __IO uint32_t EINT10S1   : 1;
  __IO uint32_t EINT11S0   : 1;
  __IO uint32_t EINT11S1   : 1;
  __IO uint32_t EINT12S0   : 1;
  __IO uint32_t EINT12S1   : 1;
  __IO uint32_t EINT13S0   : 1;
  __IO uint32_t EINT13S1   : 1;
  __IO uint32_t EINT14S0   : 1;
  __IO uint32_t EINT14S1   : 1;
  __IO uint32_t EINT15S0   : 1;
  __IO uint32_t EINT15S1   : 1;
} stc_gpio_epfr06_field_t;

typedef struct stc_gpio_epfr07_field
{
       uint32_t RESERVED1  : 4;
  __IO uint32_t SIN0S0     : 1;
  __IO uint32_t SIN0S1     : 1;
  __IO uint32_t SOT0B0     : 1;
  __IO uint32_t SOT0B1     : 1;
  __IO uint32_t SCK0B0     : 1;
  __IO uint32_t SCK0B1     : 1;
  __IO uint32_t SIN1S0     : 1;
  __IO uint32_t SIN1S1     : 1;
  __IO uint32_t SOT1B0     : 1;
  __IO uint32_t SOT1B1     : 1;
  __IO uint32_t SCK1B0     : 1;
  __IO uint32_t SCK1B1     : 1;
  __IO uint32_t SIN2S0     : 1;
  __IO uint32_t SIN2S1     : 1;
  __IO uint32_t SOT2B0     : 1;
  __IO uint32_t SOT2B1     : 1;
  __IO uint32_t SCK2B0     : 1;
  __IO uint32_t SCK2B1     : 1;
  __IO uint32_t SIN3S0     : 1;
  __IO uint32_t SIN3S1     : 1;
  __IO uint32_t SOT3B0     : 1;
  __IO uint32_t SOT3B1     : 1;
  __IO uint32_t SCK3B0     : 1;
  __IO uint32_t SCK3B1     : 1;
} stc_gpio_epfr07_field_t;

typedef struct stc_gpio_epfr08_field
{
  __IO uint32_t RTS4E0     : 1;
  __IO uint32_t RTS4E1     : 1;
  __IO uint32_t CTS4S0     : 1;
  __IO uint32_t CTS4S1     : 1;
  __IO uint32_t SIN4S0     : 1;
  __IO uint32_t SIN4S1     : 1;
  __IO uint32_t SOT4B0     : 1;
  __IO uint32_t SOT4B1     : 1;
  __IO uint32_t SCK4B0     : 1;
  __IO uint32_t SCK4B1     : 1;
  __IO uint32_t SIN5S0     : 1;
  __IO uint32_t SIN5S1     : 1;
  __IO uint32_t SOT5B0     : 1;
  __IO uint32_t SOT5B1     : 1;
  __IO uint32_t SCK5B0     : 1;
  __IO uint32_t SCK5B1     : 1;
  __IO uint32_t SIN6S0     : 1;
  __IO uint32_t SIN6S1     : 1;
  __IO uint32_t SOT6B0     : 1;
  __IO uint32_t SOT6B1     : 1;
  __IO uint32_t SCK6B0     : 1;
  __IO uint32_t SCK6B1     : 1;
  __IO uint32_t SIN7S0     : 1;
  __IO uint32_t SIN7S1     : 1;
  __IO uint32_t SOT7B0     : 1;
  __IO uint32_t SOT7B1     : 1;
  __IO uint32_t SCK7B0     : 1;
  __IO uint32_t SCK7B1     : 1;
} stc_gpio_epfr08_field_t;

typedef struct stc_gpio_epfr09_field
{
  __IO uint32_t QAIN0S0    : 1;
  __IO uint32_t QAIN0S1    : 1;
  __IO uint32_t QBIN0S0    : 1;
  __IO uint32_t QBIN0S1    : 1;
  __IO uint32_t QZIN0S0    : 1;
  __IO uint32_t QZIN0S1    : 1;
  __IO uint32_t QAIN1S0    : 1;
  __IO uint32_t QAIN1S1    : 1;
  __IO uint32_t QBIN1S0    : 1;
  __IO uint32_t QBIN1S1    : 1;
  __IO uint32_t QZIN1S0    : 1;
  __IO uint32_t QZIN1S1    : 1;
  __IO uint32_t ADTRG0S0   : 1;
  __IO uint32_t ADTRG0S1   : 1;
  __IO uint32_t ADTRG0S2   : 1;
  __IO uint32_t ADTRG0S3   : 1;
  __IO uint32_t ADTRG1S0   : 1;
  __IO uint32_t ADTRG1S1   : 1;
  __IO uint32_t ADTRG1S2   : 1;
  __IO uint32_t ADTRG1S3   : 1;
  __IO uint32_t ADTRG2S0   : 1;
  __IO uint32_t ADTRG2S1   : 1;
  __IO uint32_t ADTRG2S2   : 1;
  __IO uint32_t ADTRG2S3   : 1;
} stc_gpio_epfr09_field_t;

typedef struct stc_gpio_epfr10_field
{
  __IO uint32_t UEDEFB     : 1;
  __IO uint32_t UEDTHB     : 1;
  __IO uint32_t UECLKE     : 1;
  __IO uint32_t UEWEXE     : 1;
  __IO uint32_t UEDQME     : 1;
  __IO uint32_t UEOEXE     : 1;
  __IO uint32_t UEFLSE     : 1;
  __IO uint32_t UECS1E     : 1;
  __IO uint32_t UECS2E     : 1;
  __IO uint32_t UECS3E     : 1;
  __IO uint32_t UECS4E     : 1;
  __IO uint32_t UECS5E     : 1;
  __IO uint32_t UECS6E     : 1;
  __IO uint32_t UECS7E     : 1;
  __IO uint32_t UEAOOE     : 1;
  __IO uint32_t UEA08E     : 1;
  __IO uint32_t UEA09E     : 1;
  __IO uint32_t UEA10E     : 1;
  __IO uint32_t UEA11E     : 1;
  __IO uint32_t UEA12E     : 1;
  __IO uint32_t UEA13E     : 1;
  __IO uint32_t UEA14E     : 1;
  __IO uint32_t UEA15E     : 1;
  __IO uint32_t UEA16E     : 1;
  __IO uint32_t UEA17E     : 1;
  __IO uint32_t UEA18E     : 1;
  __IO uint32_t UEA19E     : 1;
  __IO uint32_t UEA20E     : 1;
  __IO uint32_t UEA21E     : 1;
  __IO uint32_t UEA22E     : 1;
  __IO uint32_t UEA23E     : 1;
  __IO uint32_t UEA24E     : 1;
} stc_gpio_epfr10_field_t;

typedef struct stc_gpio_epfr11_field
{
  __IO uint32_t UEALEE     : 1;
  __IO uint32_t UECS0E     : 1;
  __IO uint32_t UEA01E     : 1;
  __IO uint32_t UEA02E     : 1;
  __IO uint32_t UEA03E     : 1;
  __IO uint32_t UEA04E     : 1;
  __IO uint32_t UEA05E     : 1;
  __IO uint32_t UEA06E     : 1;
  __IO uint32_t UEA07E     : 1;
  __IO uint32_t UED00B     : 1;
  __IO uint32_t UED01B     : 1;
  __IO uint32_t UED02B     : 1;
  __IO uint32_t UED03B     : 1;
  __IO uint32_t UED04B     : 1;
  __IO uint32_t UED05B     : 1;
  __IO uint32_t UED06B     : 1;
  __IO uint32_t UED07B     : 1;
  __IO uint32_t UED08B     : 1;
  __IO uint32_t UED09B     : 1;
  __IO uint32_t UED10B     : 1;
  __IO uint32_t UED11B     : 1;
  __IO uint32_t UED12B     : 1;
  __IO uint32_t UED13B     : 1;
  __IO uint32_t UED14B     : 1;
  __IO uint32_t UED15B     : 1;
  __IO uint32_t UERLC      : 1;
} stc_gpio_epfr11_field_t;

typedef struct stc_gpio_epfr12_field
{
       uint32_t RESERVED1  : 2;
  __IO uint32_t TIOA8E0    : 1;
  __IO uint32_t TIOA8E1    : 1;
  __IO uint32_t TIOB8S0    : 1;
  __IO uint32_t TIOB8S1    : 1;
       uint32_t RESERVED2  : 2;
  __IO uint32_t TIOA9S0    : 1;
  __IO uint32_t TIOA9S1    : 1;
  __IO uint32_t TIOA9E0    : 1;
  __IO uint32_t TIOA9E1    : 1;
  __IO uint32_t TIOB9S0    : 1;
  __IO uint32_t TIOB9S1    : 1;
       uint32_t RESERVED3  : 4;
  __IO uint32_t TIOA10E0   : 1;
  __IO uint32_t TIOA10E1   : 1;
  __IO uint32_t TIOB10S0   : 1;
  __IO uint32_t TIOB10S1   : 1;
       uint32_t RESERVED4  : 2;
  __IO uint32_t TIOA11S0   : 1;
  __IO uint32_t TIOA11S1   : 1;
  __IO uint32_t TIOA11E0   : 1;
  __IO uint32_t TIOA11E1   : 1;
  __IO uint32_t TIOB11S0   : 1;
  __IO uint32_t TIOB11S1   : 1;
} stc_gpio_epfr12_field_t;

typedef struct stc_gpio_epfr13_field
{
       uint32_t RESERVED1  : 2;
  __IO uint32_t TIOA12E0   : 1;
  __IO uint32_t TIOA12E1   : 1;
  __IO uint32_t TIOB12S0   : 1;
  __IO uint32_t TIOB12S1   : 1;
       uint32_t RESERVED2  : 2;
  __IO uint32_t TIOA13S0   : 1;
  __IO uint32_t TIOA13S1   : 1;
  __IO uint32_t TIOA13E0   : 1;
  __IO uint32_t TIOA13E1   : 1;
  __IO uint32_t TIOB13S0   : 1;
  __IO uint32_t TIOB13S1   : 1;
       uint32_t RESERVED3  : 4;
  __IO uint32_t TIOA14E0   : 1;
  __IO uint32_t TIOA14E1   : 1;
  __IO uint32_t TIOB14S0   : 1;
  __IO uint32_t TIOB14S1   : 1;
       uint32_t RESERVED4  : 2;
  __IO uint32_t TIOA15S0   : 1;
  __IO uint32_t TIOA15S1   : 1;
  __IO uint32_t TIOA15E0   : 1;
  __IO uint32_t TIOA15E1   : 1;
  __IO uint32_t TIOB15S0   : 1;
  __IO uint32_t TIOB15S1   : 1;
} stc_gpio_epfr13_field_t;

typedef struct stc_gpio_epfr14_field
{
  __IO uint32_t QAIN2S0    : 1;
  __IO uint32_t QAIN2S1    : 1;
  __IO uint32_t QBIN2S0    : 1;
  __IO uint32_t QBIN2S1    : 1;
  __IO uint32_t QZIN2S0    : 1;
  __IO uint32_t QZIN2S1    : 1;
       uint32_t RESERVED1  : 12;
  __IO uint32_t E_TD0E     : 1;
  __IO uint32_t E_TD1E     : 1;
  __IO uint32_t E_TE0E     : 1;
  __IO uint32_t E_TE1E     : 1;
  __IO uint32_t E_MC0E     : 1;
  __IO uint32_t E_MC1B     : 1;
  __IO uint32_t E_MD0B     : 1;
  __IO uint32_t E_MD1B     : 1;
  __IO uint32_t E_CKE      : 1;
  __IO uint32_t E_PSE      : 1;
  __IO uint32_t E_SPLC0    : 1;
  __IO uint32_t E_SPLC1    : 1;
} stc_gpio_epfr14_field_t;

typedef struct stc_gpio_epfr15_field
{
  __IO uint32_t EINT16S0   : 1;
  __IO uint32_t EINT16S1   : 1;
  __IO uint32_t EINT17S0   : 1;
  __IO uint32_t EINT17S1   : 1;
  __IO uint32_t EINT18S0   : 1;
  __IO uint32_t EINT18S1   : 1;
  __IO uint32_t EINT19S0   : 1;
  __IO uint32_t EINT19S1   : 1;
  __IO uint32_t EINT20S0   : 1;
  __IO uint32_t EINT20S1   : 1;
  __IO uint32_t EINT21S0   : 1;
  __IO uint32_t EINT21S1   : 1;
  __IO uint32_t EINT22S0   : 1;
  __IO uint32_t EINT22S1   : 1;
  __IO uint32_t EINT23S0   : 1;
  __IO uint32_t EINT23S1   : 1;
  __IO uint32_t EINT24S0   : 1;
  __IO uint32_t EINT24S1   : 1;
  __IO uint32_t EINT25S0   : 1;
  __IO uint32_t EINT25S1   : 1;
  __IO uint32_t EINT26S0   : 1;
  __IO uint32_t EINT26S1   : 1;
  __IO uint32_t EINT27S0   : 1;
  __IO uint32_t EINT27S1   : 1;
  __IO uint32_t EINT28S0   : 1;
  __IO uint32_t EINT28S1   : 1;
  __IO uint32_t EINT29S0   : 1;
  __IO uint32_t EINT29S1   : 1;
  __IO uint32_t EINT30S0   : 1;
  __IO uint32_t EINT30S1   : 1;
  __IO uint32_t EINT31S0   : 1;
  __IO uint32_t EINT31S1   : 1;
} stc_gpio_epfr15_field_t;

typedef struct stc_gpio_pzr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pzr0_field_t;

typedef struct stc_gpio_pzr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pzr1_field_t;

typedef struct stc_gpio_pzr2_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
} stc_gpio_pzr2_field_t;

typedef struct stc_gpio_pzr3_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pzr3_field_t;

typedef struct stc_gpio_pzr4_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_pzr4_field_t;

typedef struct stc_gpio_pzr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
} stc_gpio_pzr5_field_t;

typedef struct stc_gpio_pzr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pzr6_field_t;

typedef struct stc_gpio_pzr7_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pzr7_field_t;

typedef struct stc_gpio_pzr8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pzr8_field_t;

typedef struct stc_gpio_pzr9_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pzr9_field_t;

typedef struct stc_gpio_pzra_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pzra_field_t;

typedef struct stc_gpio_pzrb_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
} stc_gpio_pzrb_field_t;

typedef struct stc_gpio_pzrc_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
  __IO uint32_t P8         : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pzrc_field_t;

typedef struct stc_gpio_pzrd_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pzrd_field_t;

typedef struct stc_gpio_pzre_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pzre_field_t;

typedef struct stc_gpio_pzrf_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
  __IO uint32_t P6         : 1;
} stc_gpio_pzrf_field_t;

/******************************************************************************
 * GPIO_MODULE
 ******************************************************************************/
/* General purpose I/O registers */
typedef struct
{
  union {
    __IO uint32_t PFR0;
    stc_gpio_pfr0_field_t PFR0_f;
  };
  union {
    __IO uint32_t PFR1;
    stc_gpio_pfr1_field_t PFR1_f;
  };
  union {
    __IO uint32_t PFR2;
    stc_gpio_pfr2_field_t PFR2_f;
  };
  union {
    __IO uint32_t PFR3;
    stc_gpio_pfr3_field_t PFR3_f;
  };
  union {
    __IO uint32_t PFR4;
    stc_gpio_pfr4_field_t PFR4_f;
  };
  union {
    __IO uint32_t PFR5;
    stc_gpio_pfr5_field_t PFR5_f;
  };
  union {
    __IO uint32_t PFR6;
    stc_gpio_pfr6_field_t PFR6_f;
  };
  union {
    __IO uint32_t PFR7;
    stc_gpio_pfr7_field_t PFR7_f;
  };
  union {
    __IO uint32_t PFR8;
    stc_gpio_pfr8_field_t PFR8_f;
  };
  union {
    __IO uint32_t PFR9;
    stc_gpio_pfr9_field_t PFR9_f;
  };
  union {
    __IO uint32_t PFRA;
    stc_gpio_pfra_field_t PFRA_f;
  };
  union {
    __IO uint32_t PFRB;
    stc_gpio_pfrb_field_t PFRB_f;
  };
  union {
    __IO uint32_t PFRC;
    stc_gpio_pfrc_field_t PFRC_f;
  };
  union {
    __IO uint32_t PFRD;
    stc_gpio_pfrd_field_t PFRD_f;
  };
  union {
    __IO uint32_t PFRE;
    stc_gpio_pfre_field_t PFRE_f;
  };
  union {
    __IO uint32_t PFRF;
    stc_gpio_pfrf_field_t PFRF_f;
  };
        uint8_t RESERVED0[192];
  union {
    __IO uint32_t PCR0;
    stc_gpio_pcr0_field_t PCR0_f;
  };
  union {
    __IO uint32_t PCR1;
    stc_gpio_pcr1_field_t PCR1_f;
  };
  union {
    __IO uint32_t PCR2;
    stc_gpio_pcr2_field_t PCR2_f;
  };
  union {
    __IO uint32_t PCR3;
    stc_gpio_pcr3_field_t PCR3_f;
  };
  union {
    __IO uint32_t PCR4;
    stc_gpio_pcr4_field_t PCR4_f;
  };
  union {
    __IO uint32_t PCR5;
    stc_gpio_pcr5_field_t PCR5_f;
  };
  union {
    __IO uint32_t PCR6;
    stc_gpio_pcr6_field_t PCR6_f;
  };
  union {
    __IO uint32_t PCR7;
    stc_gpio_pcr7_field_t PCR7_f;
  };
  __IO uint32_t PCR8;
  union {
    __IO uint32_t PCR9;
    stc_gpio_pcr9_field_t PCR9_f;
  };
  union {
    __IO uint32_t PCRA;
    stc_gpio_pcra_field_t PCRA_f;
  };
  union {
    __IO uint32_t PCRB;
    stc_gpio_pcrb_field_t PCRB_f;
  };
  union {
    __IO uint32_t PCRC;
    stc_gpio_pcrc_field_t PCRC_f;
  };
  union {
    __IO uint32_t PCRD;
    stc_gpio_pcrd_field_t PCRD_f;
  };
  union {
    __IO uint32_t PCRE;
    stc_gpio_pcre_field_t PCRE_f;
  };
  __IO uint32_t PCRF;
        uint8_t RESERVED1[192];
  union {
    __IO uint32_t DDR0;
    stc_gpio_ddr0_field_t DDR0_f;
  };
  union {
    __IO uint32_t DDR1;
    stc_gpio_ddr1_field_t DDR1_f;
  };
  union {
    __IO uint32_t DDR2;
    stc_gpio_ddr2_field_t DDR2_f;
  };
  union {
    __IO uint32_t DDR3;
    stc_gpio_ddr3_field_t DDR3_f;
  };
  union {
    __IO uint32_t DDR4;
    stc_gpio_ddr4_field_t DDR4_f;
  };
  union {
    __IO uint32_t DDR5;
    stc_gpio_ddr5_field_t DDR5_f;
  };
  union {
    __IO uint32_t DDR6;
    stc_gpio_ddr6_field_t DDR6_f;
  };
  union {
    __IO uint32_t DDR7;
    stc_gpio_ddr7_field_t DDR7_f;
  };
  union {
    __IO uint32_t DDR8;
    stc_gpio_ddr8_field_t DDR8_f;
  };
  union {
    __IO uint32_t DDR9;
    stc_gpio_ddr9_field_t DDR9_f;
  };
  union {
    __IO uint32_t DDRA;
    stc_gpio_ddra_field_t DDRA_f;
  };
  union {
    __IO uint32_t DDRB;
    stc_gpio_ddrb_field_t DDRB_f;
  };
  union {
    __IO uint32_t DDRC;
    stc_gpio_ddrc_field_t DDRC_f;
  };
  union {
    __IO uint32_t DDRD;
    stc_gpio_ddrd_field_t DDRD_f;
  };
  union {
    __IO uint32_t DDRE;
    stc_gpio_ddre_field_t DDRE_f;
  };
  union {
    __IO uint32_t DDRF;
    stc_gpio_ddrf_field_t DDRF_f;
  };
        uint8_t RESERVED2[192];
  union {
    __IO uint32_t PDIR0;
    stc_gpio_pdir0_field_t PDIR0_f;
  };
  union {
    __IO uint32_t PDIR1;
    stc_gpio_pdir1_field_t PDIR1_f;
  };
  union {
    __IO uint32_t PDIR2;
    stc_gpio_pdir2_field_t PDIR2_f;
  };
  union {
    __IO uint32_t PDIR3;
    stc_gpio_pdir3_field_t PDIR3_f;
  };
  union {
    __IO uint32_t PDIR4;
    stc_gpio_pdir4_field_t PDIR4_f;
  };
  union {
    __IO uint32_t PDIR5;
    stc_gpio_pdir5_field_t PDIR5_f;
  };
  union {
    __IO uint32_t PDIR6;
    stc_gpio_pdir6_field_t PDIR6_f;
  };
  union {
    __IO uint32_t PDIR7;
    stc_gpio_pdir7_field_t PDIR7_f;
  };
  union {
    __IO uint32_t PDIR8;
    stc_gpio_pdir8_field_t PDIR8_f;
  };
  union {
    __IO uint32_t PDIR9;
    stc_gpio_pdir9_field_t PDIR9_f;
  };
  union {
    __IO uint32_t PDIRA;
    stc_gpio_pdira_field_t PDIRA_f;
  };
  union {
    __IO uint32_t PDIRB;
    stc_gpio_pdirb_field_t PDIRB_f;
  };
  union {
    __IO uint32_t PDIRC;
    stc_gpio_pdirc_field_t PDIRC_f;
  };
  union {
    __IO uint32_t PDIRD;
    stc_gpio_pdird_field_t PDIRD_f;
  };
  union {
    __IO uint32_t PDIRE;
    stc_gpio_pdire_field_t PDIRE_f;
  };
  union {
    __IO uint32_t PDIRF;
    stc_gpio_pdirf_field_t PDIRF_f;
  };
        uint8_t RESERVED3[192];
  union {
    __IO uint32_t PDOR0;
    stc_gpio_pdor0_field_t PDOR0_f;
  };
  union {
    __IO uint32_t PDOR1;
    stc_gpio_pdor1_field_t PDOR1_f;
  };
  union {
    __IO uint32_t PDOR2;
    stc_gpio_pdor2_field_t PDOR2_f;
  };
  union {
    __IO uint32_t PDOR3;
    stc_gpio_pdor3_field_t PDOR3_f;
  };
  union {
    __IO uint32_t PDOR4;
    stc_gpio_pdor4_field_t PDOR4_f;
  };
  union {
    __IO uint32_t PDOR5;
    stc_gpio_pdor5_field_t PDOR5_f;
  };
  union {
    __IO uint32_t PDOR6;
    stc_gpio_pdor6_field_t PDOR6_f;
  };
  union {
    __IO uint32_t PDOR7;
    stc_gpio_pdor7_field_t PDOR7_f;
  };
  union {
    __IO uint32_t PDOR8;
    stc_gpio_pdor8_field_t PDOR8_f;
  };
  union {
    __IO uint32_t PDOR9;
    stc_gpio_pdor9_field_t PDOR9_f;
  };
  union {
    __IO uint32_t PDORA;
    stc_gpio_pdora_field_t PDORA_f;
  };
  union {
    __IO uint32_t PDORB;
    stc_gpio_pdorb_field_t PDORB_f;
  };
  union {
    __IO uint32_t PDORC;
    stc_gpio_pdorc_field_t PDORC_f;
  };
  union {
    __IO uint32_t PDORD;
    stc_gpio_pdord_field_t PDORD_f;
  };
  union {
    __IO uint32_t PDORE;
    stc_gpio_pdore_field_t PDORE_f;
  };
  union {
    __IO uint32_t PDORF;
    stc_gpio_pdorf_field_t PDORF_f;
  };
        uint8_t RESERVED4[192];
  union {
    __IO uint32_t ADE;
    stc_gpio_ade_field_t ADE_f;
  };
        uint8_t RESERVED5[124];
  union {
    __IO uint32_t SPSR;
    stc_gpio_spsr_field_t SPSR_f;
  };
        uint8_t RESERVED6[124];
  union {
    __IO uint32_t EPFR00;
    stc_gpio_epfr00_field_t EPFR00_f;
  };
  union {
    __IO uint32_t EPFR01;
    stc_gpio_epfr01_field_t EPFR01_f;
  };
  union {
    __IO uint32_t EPFR02;
    stc_gpio_epfr02_field_t EPFR02_f;
  };
  union {
    __IO uint32_t EPFR03;
    stc_gpio_epfr03_field_t EPFR03_f;
  };
  union {
    __IO uint32_t EPFR04;
    stc_gpio_epfr04_field_t EPFR04_f;
  };
  union {
    __IO uint32_t EPFR05;
    stc_gpio_epfr05_field_t EPFR05_f;
  };
  union {
    __IO uint32_t EPFR06;
    stc_gpio_epfr06_field_t EPFR06_f;
  };
  union {
    __IO uint32_t EPFR07;
    stc_gpio_epfr07_field_t EPFR07_f;
  };
  union {
    __IO uint32_t EPFR08;
    stc_gpio_epfr08_field_t EPFR08_f;
  };
  union {
    __IO uint32_t EPFR09;
    stc_gpio_epfr09_field_t EPFR09_f;
  };
  union {
    __IO uint32_t EPFR10;
    stc_gpio_epfr10_field_t EPFR10_f;
  };
  union {
    __IO uint32_t EPFR11;
    stc_gpio_epfr11_field_t EPFR11_f;
  };
  union {
    __IO uint32_t EPFR12;
    stc_gpio_epfr12_field_t EPFR12_f;
  };
  union {
    __IO uint32_t EPFR13;
    stc_gpio_epfr13_field_t EPFR13_f;
  };
  union {
    __IO uint32_t EPFR14;
    stc_gpio_epfr14_field_t EPFR14_f;
  };
  union {
    __IO uint32_t EPFR15;
    stc_gpio_epfr15_field_t EPFR15_f;
  };
        uint8_t RESERVED7[192];
  union {
    __IO uint32_t PZR0;
    stc_gpio_pzr0_field_t PZR0_f;
  };
  union {
    __IO uint32_t PZR1;
    stc_gpio_pzr1_field_t PZR1_f;
  };
  union {
    __IO uint32_t PZR2;
    stc_gpio_pzr2_field_t PZR2_f;
  };
  union {
    __IO uint32_t PZR3;
    stc_gpio_pzr3_field_t PZR3_f;
  };
  union {
    __IO uint32_t PZR4;
    stc_gpio_pzr4_field_t PZR4_f;
  };
  union {
    __IO uint32_t PZR5;
    stc_gpio_pzr5_field_t PZR5_f;
  };
  union {
    __IO uint32_t PZR6;
    stc_gpio_pzr6_field_t PZR6_f;
  };
  union {
    __IO uint32_t PZR7;
    stc_gpio_pzr7_field_t PZR7_f;
  };
  union {
    __IO uint32_t PZR8;
    stc_gpio_pzr8_field_t PZR8_f;
  };
  union {
    __IO uint32_t PZR9;
    stc_gpio_pzr9_field_t PZR9_f;
  };
  union {
    __IO uint32_t PZRA;
    stc_gpio_pzra_field_t PZRA_f;
  };
  union {
    __IO uint32_t PZRB;
    stc_gpio_pzrb_field_t PZRB_f;
  };
  union {
    __IO uint32_t PZRC;
    stc_gpio_pzrc_field_t PZRC_f;
  };
  union {
    __IO uint32_t PZRD;
    stc_gpio_pzrd_field_t PZRD_f;
  };
  union {
    __IO uint32_t PZRE;
    stc_gpio_pzre_field_t PZRE_f;
  };
  union {
    __IO uint32_t PZRF;
    stc_gpio_pzrf_field_t PZRF_f;
  };
}FM3_GPIO_TypeDef;

#define FM3_PERIPH_BASE       (0x40000000UL)                 /* Peripheral  Base                       */
#define FM3_GPIO_BASE         (FM3_PERIPH_BASE + 0x33000UL)  /* General purpose I/O registers          */
#define FM3_GPIO        ((FM3_GPIO_TypeDef *)FM3_GPIO_BASE)

/* General purpose I/O registers */
#define bFM3_GPIO_PFR0_P0                      *((volatile unsigned int*)(0x42660000UL))
#define bFM3_GPIO_PFR0_P1                      *((volatile unsigned int*)(0x42660004UL))
#define bFM3_GPIO_PFR0_P2                      *((volatile unsigned int*)(0x42660008UL))
#define bFM3_GPIO_PFR0_P3                      *((volatile unsigned int*)(0x4266000CUL))
#define bFM3_GPIO_PFR0_P4                      *((volatile unsigned int*)(0x42660010UL))
#define bFM3_GPIO_PFR0_P5                      *((volatile unsigned int*)(0x42660014UL))
#define bFM3_GPIO_PFR0_P6                      *((volatile unsigned int*)(0x42660018UL))
#define bFM3_GPIO_PFR0_P7                      *((volatile unsigned int*)(0x4266001CUL))
#define bFM3_GPIO_PFR0_P8                      *((volatile unsigned int*)(0x42660020UL))
#define bFM3_GPIO_PFR0_P9                      *((volatile unsigned int*)(0x42660024UL))
#define bFM3_GPIO_PFR1_P0                      *((volatile unsigned int*)(0x42660080UL))
#define bFM3_GPIO_PFR1_P1                      *((volatile unsigned int*)(0x42660084UL))
#define bFM3_GPIO_PFR1_P2                      *((volatile unsigned int*)(0x42660088UL))
#define bFM3_GPIO_PFR1_P3                      *((volatile unsigned int*)(0x4266008CUL))
#define bFM3_GPIO_PFR1_P4                      *((volatile unsigned int*)(0x42660090UL))
#define bFM3_GPIO_PFR1_P5                      *((volatile unsigned int*)(0x42660094UL))
#define bFM3_GPIO_PFR1_P6                      *((volatile unsigned int*)(0x42660098UL))
#define bFM3_GPIO_PFR1_P7                      *((volatile unsigned int*)(0x4266009CUL))
#define bFM3_GPIO_PFR1_P8                      *((volatile unsigned int*)(0x426600A0UL))
#define bFM3_GPIO_PFR1_P9                      *((volatile unsigned int*)(0x426600A4UL))
#define bFM3_GPIO_PFR1_PA                      *((volatile unsigned int*)(0x426600A8UL))
#define bFM3_GPIO_PFR1_PB                      *((volatile unsigned int*)(0x426600ACUL))
#define bFM3_GPIO_PFR1_PC                      *((volatile unsigned int*)(0x426600B0UL))
#define bFM3_GPIO_PFR1_PD                      *((volatile unsigned int*)(0x426600B4UL))
#define bFM3_GPIO_PFR1_PE                      *((volatile unsigned int*)(0x426600B8UL))
#define bFM3_GPIO_PFR1_PF                      *((volatile unsigned int*)(0x426600BCUL))
#define bFM3_GPIO_PFR2_P0                      *((volatile unsigned int*)(0x42660100UL))
#define bFM3_GPIO_PFR2_P1                      *((volatile unsigned int*)(0x42660104UL))
#define bFM3_GPIO_PFR2_P2                      *((volatile unsigned int*)(0x42660108UL))
#define bFM3_GPIO_PFR2_P3                      *((volatile unsigned int*)(0x4266010CUL))
#define bFM3_GPIO_PFR2_P4                      *((volatile unsigned int*)(0x42660110UL))
#define bFM3_GPIO_PFR2_P5                      *((volatile unsigned int*)(0x42660114UL))
#define bFM3_GPIO_PFR2_P6                      *((volatile unsigned int*)(0x42660118UL))
#define bFM3_GPIO_PFR2_P7                      *((volatile unsigned int*)(0x4266011CUL))
#define bFM3_GPIO_PFR2_P8                      *((volatile unsigned int*)(0x42660120UL))
#define bFM3_GPIO_PFR2_P9                      *((volatile unsigned int*)(0x42660124UL))
#define bFM3_GPIO_PFR3_P0                      *((volatile unsigned int*)(0x42660180UL))
#define bFM3_GPIO_PFR3_P1                      *((volatile unsigned int*)(0x42660184UL))
#define bFM3_GPIO_PFR3_P2                      *((volatile unsigned int*)(0x42660188UL))
#define bFM3_GPIO_PFR3_P3                      *((volatile unsigned int*)(0x4266018CUL))
#define bFM3_GPIO_PFR3_P4                      *((volatile unsigned int*)(0x42660190UL))
#define bFM3_GPIO_PFR3_P5                      *((volatile unsigned int*)(0x42660194UL))
#define bFM3_GPIO_PFR3_P6                      *((volatile unsigned int*)(0x42660198UL))
#define bFM3_GPIO_PFR3_P7                      *((volatile unsigned int*)(0x4266019CUL))
#define bFM3_GPIO_PFR3_P8                      *((volatile unsigned int*)(0x426601A0UL))
#define bFM3_GPIO_PFR3_P9                      *((volatile unsigned int*)(0x426601A4UL))
#define bFM3_GPIO_PFR3_PA                      *((volatile unsigned int*)(0x426601A8UL))
#define bFM3_GPIO_PFR3_PB                      *((volatile unsigned int*)(0x426601ACUL))
#define bFM3_GPIO_PFR3_PC                      *((volatile unsigned int*)(0x426601B0UL))
#define bFM3_GPIO_PFR3_PD                      *((volatile unsigned int*)(0x426601B4UL))
#define bFM3_GPIO_PFR3_PE                      *((volatile unsigned int*)(0x426601B8UL))
#define bFM3_GPIO_PFR3_PF                      *((volatile unsigned int*)(0x426601BCUL))
#define bFM3_GPIO_PFR4_P0                      *((volatile unsigned int*)(0x42660200UL))
#define bFM3_GPIO_PFR4_P1                      *((volatile unsigned int*)(0x42660204UL))
#define bFM3_GPIO_PFR4_P2                      *((volatile unsigned int*)(0x42660208UL))
#define bFM3_GPIO_PFR4_P3                      *((volatile unsigned int*)(0x4266020CUL))
#define bFM3_GPIO_PFR4_P4                      *((volatile unsigned int*)(0x42660210UL))
#define bFM3_GPIO_PFR4_P5                      *((volatile unsigned int*)(0x42660214UL))
#define bFM3_GPIO_PFR4_P6                      *((volatile unsigned int*)(0x42660218UL))
#define bFM3_GPIO_PFR4_P7                      *((volatile unsigned int*)(0x4266021CUL))
#define bFM3_GPIO_PFR4_P8                      *((volatile unsigned int*)(0x42660220UL))
#define bFM3_GPIO_PFR4_P9                      *((volatile unsigned int*)(0x42660224UL))
#define bFM3_GPIO_PFR4_PA                      *((volatile unsigned int*)(0x42660228UL))
#define bFM3_GPIO_PFR4_PB                      *((volatile unsigned int*)(0x4266022CUL))
#define bFM3_GPIO_PFR4_PC                      *((volatile unsigned int*)(0x42660230UL))
#define bFM3_GPIO_PFR4_PD                      *((volatile unsigned int*)(0x42660234UL))
#define bFM3_GPIO_PFR4_PE                      *((volatile unsigned int*)(0x42660238UL))
#define bFM3_GPIO_PFR5_P0                      *((volatile unsigned int*)(0x42660280UL))
#define bFM3_GPIO_PFR5_P1                      *((volatile unsigned int*)(0x42660284UL))
#define bFM3_GPIO_PFR5_P2                      *((volatile unsigned int*)(0x42660288UL))
#define bFM3_GPIO_PFR5_P3                      *((volatile unsigned int*)(0x4266028CUL))
#define bFM3_GPIO_PFR5_P4                      *((volatile unsigned int*)(0x42660290UL))
#define bFM3_GPIO_PFR5_P5                      *((volatile unsigned int*)(0x42660294UL))
#define bFM3_GPIO_PFR5_P6                      *((volatile unsigned int*)(0x42660298UL))
#define bFM3_GPIO_PFR5_P7                      *((volatile unsigned int*)(0x4266029CUL))
#define bFM3_GPIO_PFR5_P8                      *((volatile unsigned int*)(0x426602A0UL))
#define bFM3_GPIO_PFR5_P9                      *((volatile unsigned int*)(0x426602A4UL))
#define bFM3_GPIO_PFR5_PA                      *((volatile unsigned int*)(0x426602A8UL))
#define bFM3_GPIO_PFR5_PB                      *((volatile unsigned int*)(0x426602ACUL))
#define bFM3_GPIO_PFR5_PC                      *((volatile unsigned int*)(0x426602B0UL))
#define bFM3_GPIO_PFR5_PD                      *((volatile unsigned int*)(0x426602B4UL))
#define bFM3_GPIO_PFR6_P0                      *((volatile unsigned int*)(0x42660300UL))
#define bFM3_GPIO_PFR6_P1                      *((volatile unsigned int*)(0x42660304UL))
#define bFM3_GPIO_PFR6_P2                      *((volatile unsigned int*)(0x42660308UL))
#define bFM3_GPIO_PFR7_P0                      *((volatile unsigned int*)(0x42660380UL))
#define bFM3_GPIO_PFR7_P1                      *((volatile unsigned int*)(0x42660384UL))
#define bFM3_GPIO_PFR7_P2                      *((volatile unsigned int*)(0x42660388UL))
#define bFM3_GPIO_PFR7_P3                      *((volatile unsigned int*)(0x4266038CUL))
#define bFM3_GPIO_PFR7_P4                      *((volatile unsigned int*)(0x42660390UL))
#define bFM3_GPIO_PFR7_P5                      *((volatile unsigned int*)(0x42660394UL))
#define bFM3_GPIO_PFR7_P6                      *((volatile unsigned int*)(0x42660398UL))
#define bFM3_GPIO_PFR7_P7                      *((volatile unsigned int*)(0x4266039CUL))
#define bFM3_GPIO_PFR7_P8                      *((volatile unsigned int*)(0x426603A0UL))
#define bFM3_GPIO_PFR7_P9                      *((volatile unsigned int*)(0x426603A4UL))
#define bFM3_GPIO_PFR7_PA                      *((volatile unsigned int*)(0x426603A8UL))
#define bFM3_GPIO_PFR7_PB                      *((volatile unsigned int*)(0x426603ACUL))
#define bFM3_GPIO_PFR7_PC                      *((volatile unsigned int*)(0x426603B0UL))
#define bFM3_GPIO_PFR7_PD                      *((volatile unsigned int*)(0x426603B4UL))
#define bFM3_GPIO_PFR7_PE                      *((volatile unsigned int*)(0x426603B8UL))
#define bFM3_GPIO_PFR7_PF                      *((volatile unsigned int*)(0x426603BCUL))
#define bFM3_GPIO_PFR8_P0                      *((volatile unsigned int*)(0x42660400UL))
#define bFM3_GPIO_PFR8_P1                      *((volatile unsigned int*)(0x42660404UL))
#define bFM3_GPIO_PFR8_P2                      *((volatile unsigned int*)(0x42660408UL))
#define bFM3_GPIO_PFR8_P3                      *((volatile unsigned int*)(0x4266040CUL))
#define bFM3_GPIO_PFR9_P0                      *((volatile unsigned int*)(0x42660480UL))
#define bFM3_GPIO_PFR9_P1                      *((volatile unsigned int*)(0x42660484UL))
#define bFM3_GPIO_PFR9_P2                      *((volatile unsigned int*)(0x42660488UL))
#define bFM3_GPIO_PFR9_P3                      *((volatile unsigned int*)(0x4266048CUL))
#define bFM3_GPIO_PFR9_P4                      *((volatile unsigned int*)(0x42660490UL))
#define bFM3_GPIO_PFR9_P5                      *((volatile unsigned int*)(0x42660494UL))
#define bFM3_GPIO_PFRA_P0                      *((volatile unsigned int*)(0x42660500UL))
#define bFM3_GPIO_PFRA_P1                      *((volatile unsigned int*)(0x42660504UL))
#define bFM3_GPIO_PFRA_P2                      *((volatile unsigned int*)(0x42660508UL))
#define bFM3_GPIO_PFRA_P3                      *((volatile unsigned int*)(0x4266050CUL))
#define bFM3_GPIO_PFRA_P4                      *((volatile unsigned int*)(0x42660510UL))
#define bFM3_GPIO_PFRA_P5                      *((volatile unsigned int*)(0x42660514UL))
#define bFM3_GPIO_PFRB_P0                      *((volatile unsigned int*)(0x42660580UL))
#define bFM3_GPIO_PFRB_P1                      *((volatile unsigned int*)(0x42660584UL))
#define bFM3_GPIO_PFRB_P2                      *((volatile unsigned int*)(0x42660588UL))
#define bFM3_GPIO_PFRB_P3                      *((volatile unsigned int*)(0x4266058CUL))
#define bFM3_GPIO_PFRB_P4                      *((volatile unsigned int*)(0x42660590UL))
#define bFM3_GPIO_PFRB_P5                      *((volatile unsigned int*)(0x42660594UL))
#define bFM3_GPIO_PFRB_P6                      *((volatile unsigned int*)(0x42660598UL))
#define bFM3_GPIO_PFRB_P7                      *((volatile unsigned int*)(0x4266059CUL))
#define bFM3_GPIO_PFRC_P0                      *((volatile unsigned int*)(0x42660600UL))
#define bFM3_GPIO_PFRC_P1                      *((volatile unsigned int*)(0x42660604UL))
#define bFM3_GPIO_PFRC_P2                      *((volatile unsigned int*)(0x42660608UL))
#define bFM3_GPIO_PFRC_P3                      *((volatile unsigned int*)(0x4266060CUL))
#define bFM3_GPIO_PFRC_P4                      *((volatile unsigned int*)(0x42660610UL))
#define bFM3_GPIO_PFRC_P5                      *((volatile unsigned int*)(0x42660614UL))
#define bFM3_GPIO_PFRC_P6                      *((volatile unsigned int*)(0x42660618UL))
#define bFM3_GPIO_PFRC_P7                      *((volatile unsigned int*)(0x4266061CUL))
#define bFM3_GPIO_PFRC_P8                      *((volatile unsigned int*)(0x42660620UL))
#define bFM3_GPIO_PFRC_P9                      *((volatile unsigned int*)(0x42660624UL))
#define bFM3_GPIO_PFRC_PA                      *((volatile unsigned int*)(0x42660628UL))
#define bFM3_GPIO_PFRC_PB                      *((volatile unsigned int*)(0x4266062CUL))
#define bFM3_GPIO_PFRC_PC                      *((volatile unsigned int*)(0x42660630UL))
#define bFM3_GPIO_PFRC_PD                      *((volatile unsigned int*)(0x42660634UL))
#define bFM3_GPIO_PFRC_PE                      *((volatile unsigned int*)(0x42660638UL))
#define bFM3_GPIO_PFRC_PF                      *((volatile unsigned int*)(0x4266063CUL))
#define bFM3_GPIO_PFRD_P0                      *((volatile unsigned int*)(0x42660680UL))
#define bFM3_GPIO_PFRD_P1                      *((volatile unsigned int*)(0x42660684UL))
#define bFM3_GPIO_PFRD_P2                      *((volatile unsigned int*)(0x42660688UL))
#define bFM3_GPIO_PFRD_P3                      *((volatile unsigned int*)(0x4266068CUL))
#define bFM3_GPIO_PFRE_P0                      *((volatile unsigned int*)(0x42660700UL))
#define bFM3_GPIO_PFRE_P2                      *((volatile unsigned int*)(0x42660708UL))
#define bFM3_GPIO_PFRE_P3                      *((volatile unsigned int*)(0x4266070CUL))
#define bFM3_GPIO_PFRF_P0                      *((volatile unsigned int*)(0x42660780UL))
#define bFM3_GPIO_PFRF_P1                      *((volatile unsigned int*)(0x42660784UL))
#define bFM3_GPIO_PFRF_P2                      *((volatile unsigned int*)(0x42660788UL))
#define bFM3_GPIO_PFRF_P3                      *((volatile unsigned int*)(0x4266078CUL))
#define bFM3_GPIO_PFRF_P4                      *((volatile unsigned int*)(0x42660790UL))
#define bFM3_GPIO_PFRF_P5                      *((volatile unsigned int*)(0x42660794UL))
#define bFM3_GPIO_PFRF_P6                      *((volatile unsigned int*)(0x42660798UL))
#define bFM3_GPIO_PCR0_P0                      *((volatile unsigned int*)(0x42662000UL))
#define bFM3_GPIO_PCR0_P1                      *((volatile unsigned int*)(0x42662004UL))
#define bFM3_GPIO_PCR0_P2                      *((volatile unsigned int*)(0x42662008UL))
#define bFM3_GPIO_PCR0_P3                      *((volatile unsigned int*)(0x4266200CUL))
#define bFM3_GPIO_PCR0_P4                      *((volatile unsigned int*)(0x42662010UL))
#define bFM3_GPIO_PCR0_P5                      *((volatile unsigned int*)(0x42662014UL))
#define bFM3_GPIO_PCR0_P6                      *((volatile unsigned int*)(0x42662018UL))
#define bFM3_GPIO_PCR0_P7                      *((volatile unsigned int*)(0x4266201CUL))
#define bFM3_GPIO_PCR0_P8                      *((volatile unsigned int*)(0x42662020UL))
#define bFM3_GPIO_PCR0_P9                      *((volatile unsigned int*)(0x42662024UL))
#define bFM3_GPIO_PCR1_P0                      *((volatile unsigned int*)(0x42662080UL))
#define bFM3_GPIO_PCR1_P1                      *((volatile unsigned int*)(0x42662084UL))
#define bFM3_GPIO_PCR1_P2                      *((volatile unsigned int*)(0x42662088UL))
#define bFM3_GPIO_PCR1_P3                      *((volatile unsigned int*)(0x4266208CUL))
#define bFM3_GPIO_PCR1_P4                      *((volatile unsigned int*)(0x42662090UL))
#define bFM3_GPIO_PCR1_P5                      *((volatile unsigned int*)(0x42662094UL))
#define bFM3_GPIO_PCR1_P6                      *((volatile unsigned int*)(0x42662098UL))
#define bFM3_GPIO_PCR1_P7                      *((volatile unsigned int*)(0x4266209CUL))
#define bFM3_GPIO_PCR1_P8                      *((volatile unsigned int*)(0x426620A0UL))
#define bFM3_GPIO_PCR1_P9                      *((volatile unsigned int*)(0x426620A4UL))
#define bFM3_GPIO_PCR1_PA                      *((volatile unsigned int*)(0x426620A8UL))
#define bFM3_GPIO_PCR1_PB                      *((volatile unsigned int*)(0x426620ACUL))
#define bFM3_GPIO_PCR1_PC                      *((volatile unsigned int*)(0x426620B0UL))
#define bFM3_GPIO_PCR1_PD                      *((volatile unsigned int*)(0x426620B4UL))
#define bFM3_GPIO_PCR1_PE                      *((volatile unsigned int*)(0x426620B8UL))
#define bFM3_GPIO_PCR1_PF                      *((volatile unsigned int*)(0x426620BCUL))
#define bFM3_GPIO_PCR2_P0                      *((volatile unsigned int*)(0x42662100UL))
#define bFM3_GPIO_PCR2_P1                      *((volatile unsigned int*)(0x42662104UL))
#define bFM3_GPIO_PCR2_P2                      *((volatile unsigned int*)(0x42662108UL))
#define bFM3_GPIO_PCR2_P3                      *((volatile unsigned int*)(0x4266210CUL))
#define bFM3_GPIO_PCR2_P4                      *((volatile unsigned int*)(0x42662110UL))
#define bFM3_GPIO_PCR2_P5                      *((volatile unsigned int*)(0x42662114UL))
#define bFM3_GPIO_PCR2_P6                      *((volatile unsigned int*)(0x42662118UL))
#define bFM3_GPIO_PCR2_P7                      *((volatile unsigned int*)(0x4266211CUL))
#define bFM3_GPIO_PCR2_P8                      *((volatile unsigned int*)(0x42662120UL))
#define bFM3_GPIO_PCR2_P9                      *((volatile unsigned int*)(0x42662124UL))
#define bFM3_GPIO_PCR3_P0                      *((volatile unsigned int*)(0x42662180UL))
#define bFM3_GPIO_PCR3_P1                      *((volatile unsigned int*)(0x42662184UL))
#define bFM3_GPIO_PCR3_P2                      *((volatile unsigned int*)(0x42662188UL))
#define bFM3_GPIO_PCR3_P3                      *((volatile unsigned int*)(0x4266218CUL))
#define bFM3_GPIO_PCR3_P4                      *((volatile unsigned int*)(0x42662190UL))
#define bFM3_GPIO_PCR3_P5                      *((volatile unsigned int*)(0x42662194UL))
#define bFM3_GPIO_PCR3_P6                      *((volatile unsigned int*)(0x42662198UL))
#define bFM3_GPIO_PCR3_P7                      *((volatile unsigned int*)(0x4266219CUL))
#define bFM3_GPIO_PCR3_P8                      *((volatile unsigned int*)(0x426621A0UL))
#define bFM3_GPIO_PCR3_P9                      *((volatile unsigned int*)(0x426621A4UL))
#define bFM3_GPIO_PCR3_PA                      *((volatile unsigned int*)(0x426621A8UL))
#define bFM3_GPIO_PCR3_PB                      *((volatile unsigned int*)(0x426621ACUL))
#define bFM3_GPIO_PCR3_PC                      *((volatile unsigned int*)(0x426621B0UL))
#define bFM3_GPIO_PCR3_PD                      *((volatile unsigned int*)(0x426621B4UL))
#define bFM3_GPIO_PCR3_PE                      *((volatile unsigned int*)(0x426621B8UL))
#define bFM3_GPIO_PCR3_PF                      *((volatile unsigned int*)(0x426621BCUL))
#define bFM3_GPIO_PCR4_P0                      *((volatile unsigned int*)(0x42662200UL))
#define bFM3_GPIO_PCR4_P1                      *((volatile unsigned int*)(0x42662204UL))
#define bFM3_GPIO_PCR4_P2                      *((volatile unsigned int*)(0x42662208UL))
#define bFM3_GPIO_PCR4_P3                      *((volatile unsigned int*)(0x4266220CUL))
#define bFM3_GPIO_PCR4_P4                      *((volatile unsigned int*)(0x42662210UL))
#define bFM3_GPIO_PCR4_P5                      *((volatile unsigned int*)(0x42662214UL))
#define bFM3_GPIO_PCR4_P6                      *((volatile unsigned int*)(0x42662218UL))
#define bFM3_GPIO_PCR4_P7                      *((volatile unsigned int*)(0x4266221CUL))
#define bFM3_GPIO_PCR4_P8                      *((volatile unsigned int*)(0x42662220UL))
#define bFM3_GPIO_PCR4_P9                      *((volatile unsigned int*)(0x42662224UL))
#define bFM3_GPIO_PCR4_PA                      *((volatile unsigned int*)(0x42662228UL))
#define bFM3_GPIO_PCR4_PB                      *((volatile unsigned int*)(0x4266222CUL))
#define bFM3_GPIO_PCR4_PC                      *((volatile unsigned int*)(0x42662230UL))
#define bFM3_GPIO_PCR4_PD                      *((volatile unsigned int*)(0x42662234UL))
#define bFM3_GPIO_PCR4_PE                      *((volatile unsigned int*)(0x42662238UL))
#define bFM3_GPIO_PCR5_P0                      *((volatile unsigned int*)(0x42662280UL))
#define bFM3_GPIO_PCR5_P1                      *((volatile unsigned int*)(0x42662284UL))
#define bFM3_GPIO_PCR5_P2                      *((volatile unsigned int*)(0x42662288UL))
#define bFM3_GPIO_PCR5_P3                      *((volatile unsigned int*)(0x4266228CUL))
#define bFM3_GPIO_PCR5_P4                      *((volatile unsigned int*)(0x42662290UL))
#define bFM3_GPIO_PCR5_P5                      *((volatile unsigned int*)(0x42662294UL))
#define bFM3_GPIO_PCR5_P6                      *((volatile unsigned int*)(0x42662298UL))
#define bFM3_GPIO_PCR5_P7                      *((volatile unsigned int*)(0x4266229CUL))
#define bFM3_GPIO_PCR5_P8                      *((volatile unsigned int*)(0x426622A0UL))
#define bFM3_GPIO_PCR5_P9                      *((volatile unsigned int*)(0x426622A4UL))
#define bFM3_GPIO_PCR5_PA                      *((volatile unsigned int*)(0x426622A8UL))
#define bFM3_GPIO_PCR5_PB                      *((volatile unsigned int*)(0x426622ACUL))
#define bFM3_GPIO_PCR5_PC                      *((volatile unsigned int*)(0x426622B0UL))
#define bFM3_GPIO_PCR5_PD                      *((volatile unsigned int*)(0x426622B4UL))
#define bFM3_GPIO_PCR6_P0                      *((volatile unsigned int*)(0x42662300UL))
#define bFM3_GPIO_PCR6_P1                      *((volatile unsigned int*)(0x42662304UL))
#define bFM3_GPIO_PCR6_P2                      *((volatile unsigned int*)(0x42662308UL))
#define bFM3_GPIO_PCR7_P0                      *((volatile unsigned int*)(0x42662380UL))
#define bFM3_GPIO_PCR7_P1                      *((volatile unsigned int*)(0x42662384UL))
#define bFM3_GPIO_PCR7_P2                      *((volatile unsigned int*)(0x42662388UL))
#define bFM3_GPIO_PCR7_P3                      *((volatile unsigned int*)(0x4266238CUL))
#define bFM3_GPIO_PCR7_P4                      *((volatile unsigned int*)(0x42662390UL))
#define bFM3_GPIO_PCR7_P5                      *((volatile unsigned int*)(0x42662394UL))
#define bFM3_GPIO_PCR7_P6                      *((volatile unsigned int*)(0x42662398UL))
#define bFM3_GPIO_PCR7_P7                      *((volatile unsigned int*)(0x4266239CUL))
#define bFM3_GPIO_PCR7_P8                      *((volatile unsigned int*)(0x426623A0UL))
#define bFM3_GPIO_PCR7_P9                      *((volatile unsigned int*)(0x426623A4UL))
#define bFM3_GPIO_PCR7_PA                      *((volatile unsigned int*)(0x426623A8UL))
#define bFM3_GPIO_PCR7_PB                      *((volatile unsigned int*)(0x426623ACUL))
#define bFM3_GPIO_PCR7_PC                      *((volatile unsigned int*)(0x426623B0UL))
#define bFM3_GPIO_PCR7_PD                      *((volatile unsigned int*)(0x426623B4UL))
#define bFM3_GPIO_PCR7_PE                      *((volatile unsigned int*)(0x426623B8UL))
#define bFM3_GPIO_PCR7_PF                      *((volatile unsigned int*)(0x426623BCUL))
#define bFM3_GPIO_PCR9_P0                      *((volatile unsigned int*)(0x42662480UL))
#define bFM3_GPIO_PCR9_P1                      *((volatile unsigned int*)(0x42662484UL))
#define bFM3_GPIO_PCR9_P2                      *((volatile unsigned int*)(0x42662488UL))
#define bFM3_GPIO_PCR9_P3                      *((volatile unsigned int*)(0x4266248CUL))
#define bFM3_GPIO_PCR9_P4                      *((volatile unsigned int*)(0x42662490UL))
#define bFM3_GPIO_PCR9_P5                      *((volatile unsigned int*)(0x42662494UL))
#define bFM3_GPIO_PCRA_P0                      *((volatile unsigned int*)(0x42662500UL))
#define bFM3_GPIO_PCRA_P1                      *((volatile unsigned int*)(0x42662504UL))
#define bFM3_GPIO_PCRA_P2                      *((volatile unsigned int*)(0x42662508UL))
#define bFM3_GPIO_PCRA_P3                      *((volatile unsigned int*)(0x4266250CUL))
#define bFM3_GPIO_PCRA_P4                      *((volatile unsigned int*)(0x42662510UL))
#define bFM3_GPIO_PCRA_P5                      *((volatile unsigned int*)(0x42662514UL))
#define bFM3_GPIO_PCRB_P0                      *((volatile unsigned int*)(0x42662580UL))
#define bFM3_GPIO_PCRB_P1                      *((volatile unsigned int*)(0x42662584UL))
#define bFM3_GPIO_PCRB_P2                      *((volatile unsigned int*)(0x42662588UL))
#define bFM3_GPIO_PCRB_P3                      *((volatile unsigned int*)(0x4266258CUL))
#define bFM3_GPIO_PCRB_P4                      *((volatile unsigned int*)(0x42662590UL))
#define bFM3_GPIO_PCRB_P5                      *((volatile unsigned int*)(0x42662594UL))
#define bFM3_GPIO_PCRB_P6                      *((volatile unsigned int*)(0x42662598UL))
#define bFM3_GPIO_PCRB_P7                      *((volatile unsigned int*)(0x4266259CUL))
#define bFM3_GPIO_PCRC_P0                      *((volatile unsigned int*)(0x42662600UL))
#define bFM3_GPIO_PCRC_P1                      *((volatile unsigned int*)(0x42662604UL))
#define bFM3_GPIO_PCRC_P2                      *((volatile unsigned int*)(0x42662608UL))
#define bFM3_GPIO_PCRC_P3                      *((volatile unsigned int*)(0x4266260CUL))
#define bFM3_GPIO_PCRC_P4                      *((volatile unsigned int*)(0x42662610UL))
#define bFM3_GPIO_PCRC_P5                      *((volatile unsigned int*)(0x42662614UL))
#define bFM3_GPIO_PCRC_P6                      *((volatile unsigned int*)(0x42662618UL))
#define bFM3_GPIO_PCRC_P7                      *((volatile unsigned int*)(0x4266261CUL))
#define bFM3_GPIO_PCRC_P8                      *((volatile unsigned int*)(0x42662620UL))
#define bFM3_GPIO_PCRC_P9                      *((volatile unsigned int*)(0x42662624UL))
#define bFM3_GPIO_PCRC_PA                      *((volatile unsigned int*)(0x42662628UL))
#define bFM3_GPIO_PCRC_PB                      *((volatile unsigned int*)(0x4266262CUL))
#define bFM3_GPIO_PCRC_PC                      *((volatile unsigned int*)(0x42662630UL))
#define bFM3_GPIO_PCRC_PD                      *((volatile unsigned int*)(0x42662634UL))
#define bFM3_GPIO_PCRC_PE                      *((volatile unsigned int*)(0x42662638UL))
#define bFM3_GPIO_PCRC_PF                      *((volatile unsigned int*)(0x4266263CUL))
#define bFM3_GPIO_PCRD_P0                      *((volatile unsigned int*)(0x42662680UL))
#define bFM3_GPIO_PCRD_P1                      *((volatile unsigned int*)(0x42662684UL))
#define bFM3_GPIO_PCRD_P2                      *((volatile unsigned int*)(0x42662688UL))
#define bFM3_GPIO_PCRD_P3                      *((volatile unsigned int*)(0x4266268CUL))
#define bFM3_GPIO_PCRE_P2                      *((volatile unsigned int*)(0x42662708UL))
#define bFM3_GPIO_PCRE_P3                      *((volatile unsigned int*)(0x4266270CUL))
#define bFM3_GPIO_DDR0_P0                      *((volatile unsigned int*)(0x42664000UL))
#define bFM3_GPIO_DDR0_P1                      *((volatile unsigned int*)(0x42664004UL))
#define bFM3_GPIO_DDR0_P2                      *((volatile unsigned int*)(0x42664008UL))
#define bFM3_GPIO_DDR0_P3                      *((volatile unsigned int*)(0x4266400CUL))
#define bFM3_GPIO_DDR0_P4                      *((volatile unsigned int*)(0x42664010UL))
#define bFM3_GPIO_DDR0_P5                      *((volatile unsigned int*)(0x42664014UL))
#define bFM3_GPIO_DDR0_P6                      *((volatile unsigned int*)(0x42664018UL))
#define bFM3_GPIO_DDR0_P7                      *((volatile unsigned int*)(0x4266401CUL))
#define bFM3_GPIO_DDR0_P8                      *((volatile unsigned int*)(0x42664020UL))
#define bFM3_GPIO_DDR0_P9                      *((volatile unsigned int*)(0x42664024UL))
#define bFM3_GPIO_DDR1_P0                      *((volatile unsigned int*)(0x42664080UL))
#define bFM3_GPIO_DDR1_P1                      *((volatile unsigned int*)(0x42664084UL))
#define bFM3_GPIO_DDR1_P2                      *((volatile unsigned int*)(0x42664088UL))
#define bFM3_GPIO_DDR1_P3                      *((volatile unsigned int*)(0x4266408CUL))
#define bFM3_GPIO_DDR1_P4                      *((volatile unsigned int*)(0x42664090UL))
#define bFM3_GPIO_DDR1_P5                      *((volatile unsigned int*)(0x42664094UL))
#define bFM3_GPIO_DDR1_P6                      *((volatile unsigned int*)(0x42664098UL))
#define bFM3_GPIO_DDR1_P7                      *((volatile unsigned int*)(0x4266409CUL))
#define bFM3_GPIO_DDR1_P8                      *((volatile unsigned int*)(0x426640A0UL))
#define bFM3_GPIO_DDR1_P9                      *((volatile unsigned int*)(0x426640A4UL))
#define bFM3_GPIO_DDR1_PA                      *((volatile unsigned int*)(0x426640A8UL))
#define bFM3_GPIO_DDR1_PB                      *((volatile unsigned int*)(0x426640ACUL))
#define bFM3_GPIO_DDR1_PC                      *((volatile unsigned int*)(0x426640B0UL))
#define bFM3_GPIO_DDR1_PD                      *((volatile unsigned int*)(0x426640B4UL))
#define bFM3_GPIO_DDR1_PE                      *((volatile unsigned int*)(0x426640B8UL))
#define bFM3_GPIO_DDR1_PF                      *((volatile unsigned int*)(0x426640BCUL))
#define bFM3_GPIO_DDR2_P0                      *((volatile unsigned int*)(0x42664100UL))
#define bFM3_GPIO_DDR2_P1                      *((volatile unsigned int*)(0x42664104UL))
#define bFM3_GPIO_DDR2_P2                      *((volatile unsigned int*)(0x42664108UL))
#define bFM3_GPIO_DDR2_P3                      *((volatile unsigned int*)(0x4266410CUL))
#define bFM3_GPIO_DDR2_P4                      *((volatile unsigned int*)(0x42664110UL))
#define bFM3_GPIO_DDR2_P5                      *((volatile unsigned int*)(0x42664114UL))
#define bFM3_GPIO_DDR2_P6                      *((volatile unsigned int*)(0x42664118UL))
#define bFM3_GPIO_DDR2_P7                      *((volatile unsigned int*)(0x4266411CUL))
#define bFM3_GPIO_DDR2_P8                      *((volatile unsigned int*)(0x42664120UL))
#define bFM3_GPIO_DDR2_P9                      *((volatile unsigned int*)(0x42664124UL))
#define bFM3_GPIO_DDR3_P0                      *((volatile unsigned int*)(0x42664180UL))
#define bFM3_GPIO_DDR3_P1                      *((volatile unsigned int*)(0x42664184UL))
#define bFM3_GPIO_DDR3_P2                      *((volatile unsigned int*)(0x42664188UL))
#define bFM3_GPIO_DDR3_P3                      *((volatile unsigned int*)(0x4266418CUL))
#define bFM3_GPIO_DDR3_P4                      *((volatile unsigned int*)(0x42664190UL))
#define bFM3_GPIO_DDR3_P5                      *((volatile unsigned int*)(0x42664194UL))
#define bFM3_GPIO_DDR3_P6                      *((volatile unsigned int*)(0x42664198UL))
#define bFM3_GPIO_DDR3_P7                      *((volatile unsigned int*)(0x4266419CUL))
#define bFM3_GPIO_DDR3_P8                      *((volatile unsigned int*)(0x426641A0UL))
#define bFM3_GPIO_DDR3_P9                      *((volatile unsigned int*)(0x426641A4UL))
#define bFM3_GPIO_DDR3_PA                      *((volatile unsigned int*)(0x426641A8UL))
#define bFM3_GPIO_DDR3_PB                      *((volatile unsigned int*)(0x426641ACUL))
#define bFM3_GPIO_DDR3_PC                      *((volatile unsigned int*)(0x426641B0UL))
#define bFM3_GPIO_DDR3_PD                      *((volatile unsigned int*)(0x426641B4UL))
#define bFM3_GPIO_DDR3_PE                      *((volatile unsigned int*)(0x426641B8UL))
#define bFM3_GPIO_DDR3_PF                      *((volatile unsigned int*)(0x426641BCUL))
#define bFM3_GPIO_DDR4_P0                      *((volatile unsigned int*)(0x42664200UL))
#define bFM3_GPIO_DDR4_P1                      *((volatile unsigned int*)(0x42664204UL))
#define bFM3_GPIO_DDR4_P2                      *((volatile unsigned int*)(0x42664208UL))
#define bFM3_GPIO_DDR4_P3                      *((volatile unsigned int*)(0x4266420CUL))
#define bFM3_GPIO_DDR4_P4                      *((volatile unsigned int*)(0x42664210UL))
#define bFM3_GPIO_DDR4_P5                      *((volatile unsigned int*)(0x42664214UL))
#define bFM3_GPIO_DDR4_P6                      *((volatile unsigned int*)(0x42664218UL))
#define bFM3_GPIO_DDR4_P7                      *((volatile unsigned int*)(0x4266421CUL))
#define bFM3_GPIO_DDR4_P8                      *((volatile unsigned int*)(0x42664220UL))
#define bFM3_GPIO_DDR4_P9                      *((volatile unsigned int*)(0x42664224UL))
#define bFM3_GPIO_DDR4_PA                      *((volatile unsigned int*)(0x42664228UL))
#define bFM3_GPIO_DDR4_PB                      *((volatile unsigned int*)(0x4266422CUL))
#define bFM3_GPIO_DDR4_PC                      *((volatile unsigned int*)(0x42664230UL))
#define bFM3_GPIO_DDR4_PD                      *((volatile unsigned int*)(0x42664234UL))
#define bFM3_GPIO_DDR4_PE                      *((volatile unsigned int*)(0x42664238UL))
#define bFM3_GPIO_DDR5_P0                      *((volatile unsigned int*)(0x42664280UL))
#define bFM3_GPIO_DDR5_P1                      *((volatile unsigned int*)(0x42664284UL))
#define bFM3_GPIO_DDR5_P2                      *((volatile unsigned int*)(0x42664288UL))
#define bFM3_GPIO_DDR5_P3                      *((volatile unsigned int*)(0x4266428CUL))
#define bFM3_GPIO_DDR5_P4                      *((volatile unsigned int*)(0x42664290UL))
#define bFM3_GPIO_DDR5_P5                      *((volatile unsigned int*)(0x42664294UL))
#define bFM3_GPIO_DDR5_P6                      *((volatile unsigned int*)(0x42664298UL))
#define bFM3_GPIO_DDR5_P7                      *((volatile unsigned int*)(0x4266429CUL))
#define bFM3_GPIO_DDR5_P8                      *((volatile unsigned int*)(0x426642A0UL))
#define bFM3_GPIO_DDR5_P9                      *((volatile unsigned int*)(0x426642A4UL))
#define bFM3_GPIO_DDR5_PA                      *((volatile unsigned int*)(0x426642A8UL))
#define bFM3_GPIO_DDR5_PB                      *((volatile unsigned int*)(0x426642ACUL))
#define bFM3_GPIO_DDR5_PC                      *((volatile unsigned int*)(0x426642B0UL))
#define bFM3_GPIO_DDR5_PD                      *((volatile unsigned int*)(0x426642B4UL))
#define bFM3_GPIO_DDR6_P0                      *((volatile unsigned int*)(0x42664300UL))
#define bFM3_GPIO_DDR6_P1                      *((volatile unsigned int*)(0x42664304UL))
#define bFM3_GPIO_DDR6_P2                      *((volatile unsigned int*)(0x42664308UL))
#define bFM3_GPIO_DDR7_P0                      *((volatile unsigned int*)(0x42664380UL))
#define bFM3_GPIO_DDR7_P1                      *((volatile unsigned int*)(0x42664384UL))
#define bFM3_GPIO_DDR7_P2                      *((volatile unsigned int*)(0x42664388UL))
#define bFM3_GPIO_DDR7_P3                      *((volatile unsigned int*)(0x4266438CUL))
#define bFM3_GPIO_DDR7_P4                      *((volatile unsigned int*)(0x42664390UL))
#define bFM3_GPIO_DDR7_P5                      *((volatile unsigned int*)(0x42664394UL))
#define bFM3_GPIO_DDR7_P6                      *((volatile unsigned int*)(0x42664398UL))
#define bFM3_GPIO_DDR7_P7                      *((volatile unsigned int*)(0x4266439CUL))
#define bFM3_GPIO_DDR7_P8                      *((volatile unsigned int*)(0x426643A0UL))
#define bFM3_GPIO_DDR7_P9                      *((volatile unsigned int*)(0x426643A4UL))
#define bFM3_GPIO_DDR7_PA                      *((volatile unsigned int*)(0x426643A8UL))
#define bFM3_GPIO_DDR7_PB                      *((volatile unsigned int*)(0x426643ACUL))
#define bFM3_GPIO_DDR7_PC                      *((volatile unsigned int*)(0x426643B0UL))
#define bFM3_GPIO_DDR7_PD                      *((volatile unsigned int*)(0x426643B4UL))
#define bFM3_GPIO_DDR7_PE                      *((volatile unsigned int*)(0x426643B8UL))
#define bFM3_GPIO_DDR7_PF                      *((volatile unsigned int*)(0x426643BCUL))
#define bFM3_GPIO_DDR8_P0                      *((volatile unsigned int*)(0x42664400UL))
#define bFM3_GPIO_DDR8_P1                      *((volatile unsigned int*)(0x42664404UL))
#define bFM3_GPIO_DDR8_P2                      *((volatile unsigned int*)(0x42664408UL))
#define bFM3_GPIO_DDR8_P3                      *((volatile unsigned int*)(0x4266440CUL))
#define bFM3_GPIO_DDR9_P0                      *((volatile unsigned int*)(0x42664480UL))
#define bFM3_GPIO_DDR9_P1                      *((volatile unsigned int*)(0x42664484UL))
#define bFM3_GPIO_DDR9_P2                      *((volatile unsigned int*)(0x42664488UL))
#define bFM3_GPIO_DDR9_P3                      *((volatile unsigned int*)(0x4266448CUL))
#define bFM3_GPIO_DDR9_P4                      *((volatile unsigned int*)(0x42664490UL))
#define bFM3_GPIO_DDR9_P5                      *((volatile unsigned int*)(0x42664494UL))
#define bFM3_GPIO_DDRA_P0                      *((volatile unsigned int*)(0x42664500UL))
#define bFM3_GPIO_DDRA_P1                      *((volatile unsigned int*)(0x42664504UL))
#define bFM3_GPIO_DDRA_P2                      *((volatile unsigned int*)(0x42664508UL))
#define bFM3_GPIO_DDRA_P3                      *((volatile unsigned int*)(0x4266450CUL))
#define bFM3_GPIO_DDRA_P4                      *((volatile unsigned int*)(0x42664510UL))
#define bFM3_GPIO_DDRA_P5                      *((volatile unsigned int*)(0x42664514UL))
#define bFM3_GPIO_DDRB_P0                      *((volatile unsigned int*)(0x42664580UL))
#define bFM3_GPIO_DDRB_P1                      *((volatile unsigned int*)(0x42664584UL))
#define bFM3_GPIO_DDRB_P2                      *((volatile unsigned int*)(0x42664588UL))
#define bFM3_GPIO_DDRB_P3                      *((volatile unsigned int*)(0x4266458CUL))
#define bFM3_GPIO_DDRB_P4                      *((volatile unsigned int*)(0x42664590UL))
#define bFM3_GPIO_DDRB_P5                      *((volatile unsigned int*)(0x42664594UL))
#define bFM3_GPIO_DDRB_P6                      *((volatile unsigned int*)(0x42664598UL))
#define bFM3_GPIO_DDRB_P7                      *((volatile unsigned int*)(0x4266459CUL))
#define bFM3_GPIO_DDRC_P0                      *((volatile unsigned int*)(0x42664600UL))
#define bFM3_GPIO_DDRC_P1                      *((volatile unsigned int*)(0x42664604UL))
#define bFM3_GPIO_DDRC_P2                      *((volatile unsigned int*)(0x42664608UL))
#define bFM3_GPIO_DDRC_P3                      *((volatile unsigned int*)(0x4266460CUL))
#define bFM3_GPIO_DDRC_P4                      *((volatile unsigned int*)(0x42664610UL))
#define bFM3_GPIO_DDRC_P5                      *((volatile unsigned int*)(0x42664614UL))
#define bFM3_GPIO_DDRC_P6                      *((volatile unsigned int*)(0x42664618UL))
#define bFM3_GPIO_DDRC_P7                      *((volatile unsigned int*)(0x4266461CUL))
#define bFM3_GPIO_DDRC_P8                      *((volatile unsigned int*)(0x42664620UL))
#define bFM3_GPIO_DDRC_P9                      *((volatile unsigned int*)(0x42664624UL))
#define bFM3_GPIO_DDRC_PA                      *((volatile unsigned int*)(0x42664628UL))
#define bFM3_GPIO_DDRC_PB                      *((volatile unsigned int*)(0x4266462CUL))
#define bFM3_GPIO_DDRC_PC                      *((volatile unsigned int*)(0x42664630UL))
#define bFM3_GPIO_DDRC_PD                      *((volatile unsigned int*)(0x42664634UL))
#define bFM3_GPIO_DDRC_PE                      *((volatile unsigned int*)(0x42664638UL))
#define bFM3_GPIO_DDRC_PF                      *((volatile unsigned int*)(0x4266463CUL))
#define bFM3_GPIO_DDRD_P0                      *((volatile unsigned int*)(0x42664680UL))
#define bFM3_GPIO_DDRD_P1                      *((volatile unsigned int*)(0x42664684UL))
#define bFM3_GPIO_DDRD_P2                      *((volatile unsigned int*)(0x42664688UL))
#define bFM3_GPIO_DDRD_P3                      *((volatile unsigned int*)(0x4266468CUL))
#define bFM3_GPIO_DDRE_P0                      *((volatile unsigned int*)(0x42664700UL))
#define bFM3_GPIO_DDRE_P2                      *((volatile unsigned int*)(0x42664708UL))
#define bFM3_GPIO_DDRE_P3                      *((volatile unsigned int*)(0x4266470CUL))
#define bFM3_GPIO_DDRF_P0                      *((volatile unsigned int*)(0x42664780UL))
#define bFM3_GPIO_DDRF_P1                      *((volatile unsigned int*)(0x42664784UL))
#define bFM3_GPIO_DDRF_P2                      *((volatile unsigned int*)(0x42664788UL))
#define bFM3_GPIO_DDRF_P3                      *((volatile unsigned int*)(0x4266478CUL))
#define bFM3_GPIO_DDRF_P4                      *((volatile unsigned int*)(0x42664790UL))
#define bFM3_GPIO_DDRF_P5                      *((volatile unsigned int*)(0x42664794UL))
#define bFM3_GPIO_DDRF_P6                      *((volatile unsigned int*)(0x42664798UL))
#define bFM3_GPIO_PDIR0_P0                     *((volatile unsigned int*)(0x42666000UL))
#define bFM3_GPIO_PDIR0_P1                     *((volatile unsigned int*)(0x42666004UL))
#define bFM3_GPIO_PDIR0_P2                     *((volatile unsigned int*)(0x42666008UL))
#define bFM3_GPIO_PDIR0_P3                     *((volatile unsigned int*)(0x4266600CUL))
#define bFM3_GPIO_PDIR0_P4                     *((volatile unsigned int*)(0x42666010UL))
#define bFM3_GPIO_PDIR0_P5                     *((volatile unsigned int*)(0x42666014UL))
#define bFM3_GPIO_PDIR0_P6                     *((volatile unsigned int*)(0x42666018UL))
#define bFM3_GPIO_PDIR0_P7                     *((volatile unsigned int*)(0x4266601CUL))
#define bFM3_GPIO_PDIR0_P8                     *((volatile unsigned int*)(0x42666020UL))
#define bFM3_GPIO_PDIR0_P9                     *((volatile unsigned int*)(0x42666024UL))
#define bFM3_GPIO_PDIR1_P0                     *((volatile unsigned int*)(0x42666080UL))
#define bFM3_GPIO_PDIR1_P1                     *((volatile unsigned int*)(0x42666084UL))
#define bFM3_GPIO_PDIR1_P2                     *((volatile unsigned int*)(0x42666088UL))
#define bFM3_GPIO_PDIR1_P3                     *((volatile unsigned int*)(0x4266608CUL))
#define bFM3_GPIO_PDIR1_P4                     *((volatile unsigned int*)(0x42666090UL))
#define bFM3_GPIO_PDIR1_P5                     *((volatile unsigned int*)(0x42666094UL))
#define bFM3_GPIO_PDIR1_P6                     *((volatile unsigned int*)(0x42666098UL))
#define bFM3_GPIO_PDIR1_P7                     *((volatile unsigned int*)(0x4266609CUL))
#define bFM3_GPIO_PDIR1_P8                     *((volatile unsigned int*)(0x426660A0UL))
#define bFM3_GPIO_PDIR1_P9                     *((volatile unsigned int*)(0x426660A4UL))
#define bFM3_GPIO_PDIR1_PA                     *((volatile unsigned int*)(0x426660A8UL))
#define bFM3_GPIO_PDIR1_PB                     *((volatile unsigned int*)(0x426660ACUL))
#define bFM3_GPIO_PDIR1_PC                     *((volatile unsigned int*)(0x426660B0UL))
#define bFM3_GPIO_PDIR1_PD                     *((volatile unsigned int*)(0x426660B4UL))
#define bFM3_GPIO_PDIR1_PE                     *((volatile unsigned int*)(0x426660B8UL))
#define bFM3_GPIO_PDIR1_PF                     *((volatile unsigned int*)(0x426660BCUL))
#define bFM3_GPIO_PDIR2_P0                     *((volatile unsigned int*)(0x42666100UL))
#define bFM3_GPIO_PDIR2_P1                     *((volatile unsigned int*)(0x42666104UL))
#define bFM3_GPIO_PDIR2_P2                     *((volatile unsigned int*)(0x42666108UL))
#define bFM3_GPIO_PDIR2_P3                     *((volatile unsigned int*)(0x4266610CUL))
#define bFM3_GPIO_PDIR2_P4                     *((volatile unsigned int*)(0x42666110UL))
#define bFM3_GPIO_PDIR2_P5                     *((volatile unsigned int*)(0x42666114UL))
#define bFM3_GPIO_PDIR2_P6                     *((volatile unsigned int*)(0x42666118UL))
#define bFM3_GPIO_PDIR2_P7                     *((volatile unsigned int*)(0x4266611CUL))
#define bFM3_GPIO_PDIR2_P8                     *((volatile unsigned int*)(0x42666120UL))
#define bFM3_GPIO_PDIR2_P9                     *((volatile unsigned int*)(0x42666124UL))
#define bFM3_GPIO_PDIR3_P0                     *((volatile unsigned int*)(0x42666180UL))
#define bFM3_GPIO_PDIR3_P1                     *((volatile unsigned int*)(0x42666184UL))
#define bFM3_GPIO_PDIR3_P2                     *((volatile unsigned int*)(0x42666188UL))
#define bFM3_GPIO_PDIR3_P3                     *((volatile unsigned int*)(0x4266618CUL))
#define bFM3_GPIO_PDIR3_P4                     *((volatile unsigned int*)(0x42666190UL))
#define bFM3_GPIO_PDIR3_P5                     *((volatile unsigned int*)(0x42666194UL))
#define bFM3_GPIO_PDIR3_P6                     *((volatile unsigned int*)(0x42666198UL))
#define bFM3_GPIO_PDIR3_P7                     *((volatile unsigned int*)(0x4266619CUL))
#define bFM3_GPIO_PDIR3_P8                     *((volatile unsigned int*)(0x426661A0UL))
#define bFM3_GPIO_PDIR3_P9                     *((volatile unsigned int*)(0x426661A4UL))
#define bFM3_GPIO_PDIR3_PA                     *((volatile unsigned int*)(0x426661A8UL))
#define bFM3_GPIO_PDIR3_PB                     *((volatile unsigned int*)(0x426661ACUL))
#define bFM3_GPIO_PDIR3_PC                     *((volatile unsigned int*)(0x426661B0UL))
#define bFM3_GPIO_PDIR3_PD                     *((volatile unsigned int*)(0x426661B4UL))
#define bFM3_GPIO_PDIR3_PE                     *((volatile unsigned int*)(0x426661B8UL))
#define bFM3_GPIO_PDIR3_PF                     *((volatile unsigned int*)(0x426661BCUL))
#define bFM3_GPIO_PDIR4_P0                     *((volatile unsigned int*)(0x42666200UL))
#define bFM3_GPIO_PDIR4_P1                     *((volatile unsigned int*)(0x42666204UL))
#define bFM3_GPIO_PDIR4_P2                     *((volatile unsigned int*)(0x42666208UL))
#define bFM3_GPIO_PDIR4_P3                     *((volatile unsigned int*)(0x4266620CUL))
#define bFM3_GPIO_PDIR4_P4                     *((volatile unsigned int*)(0x42666210UL))
#define bFM3_GPIO_PDIR4_P5                     *((volatile unsigned int*)(0x42666214UL))
#define bFM3_GPIO_PDIR4_P6                     *((volatile unsigned int*)(0x42666218UL))
#define bFM3_GPIO_PDIR4_P7                     *((volatile unsigned int*)(0x4266621CUL))
#define bFM3_GPIO_PDIR4_P8                     *((volatile unsigned int*)(0x42666220UL))
#define bFM3_GPIO_PDIR4_P9                     *((volatile unsigned int*)(0x42666224UL))
#define bFM3_GPIO_PDIR4_PA                     *((volatile unsigned int*)(0x42666228UL))
#define bFM3_GPIO_PDIR4_PB                     *((volatile unsigned int*)(0x4266622CUL))
#define bFM3_GPIO_PDIR4_PC                     *((volatile unsigned int*)(0x42666230UL))
#define bFM3_GPIO_PDIR4_PD                     *((volatile unsigned int*)(0x42666234UL))
#define bFM3_GPIO_PDIR4_PE                     *((volatile unsigned int*)(0x42666238UL))
#define bFM3_GPIO_PDIR5_P0                     *((volatile unsigned int*)(0x42666280UL))
#define bFM3_GPIO_PDIR5_P1                     *((volatile unsigned int*)(0x42666284UL))
#define bFM3_GPIO_PDIR5_P2                     *((volatile unsigned int*)(0x42666288UL))
#define bFM3_GPIO_PDIR5_P3                     *((volatile unsigned int*)(0x4266628CUL))
#define bFM3_GPIO_PDIR5_P4                     *((volatile unsigned int*)(0x42666290UL))
#define bFM3_GPIO_PDIR5_P5                     *((volatile unsigned int*)(0x42666294UL))
#define bFM3_GPIO_PDIR5_P6                     *((volatile unsigned int*)(0x42666298UL))
#define bFM3_GPIO_PDIR5_P7                     *((volatile unsigned int*)(0x4266629CUL))
#define bFM3_GPIO_PDIR5_P8                     *((volatile unsigned int*)(0x426662A0UL))
#define bFM3_GPIO_PDIR5_P9                     *((volatile unsigned int*)(0x426662A4UL))
#define bFM3_GPIO_PDIR5_PA                     *((volatile unsigned int*)(0x426662A8UL))
#define bFM3_GPIO_PDIR5_PB                     *((volatile unsigned int*)(0x426662ACUL))
#define bFM3_GPIO_PDIR5_PC                     *((volatile unsigned int*)(0x426662B0UL))
#define bFM3_GPIO_PDIR5_PD                     *((volatile unsigned int*)(0x426662B4UL))
#define bFM3_GPIO_PDIR6_P0                     *((volatile unsigned int*)(0x42666300UL))
#define bFM3_GPIO_PDIR6_P1                     *((volatile unsigned int*)(0x42666304UL))
#define bFM3_GPIO_PDIR6_P2                     *((volatile unsigned int*)(0x42666308UL))
#define bFM3_GPIO_PDIR7_P0                     *((volatile unsigned int*)(0x42666380UL))
#define bFM3_GPIO_PDIR7_P1                     *((volatile unsigned int*)(0x42666384UL))
#define bFM3_GPIO_PDIR7_P2                     *((volatile unsigned int*)(0x42666388UL))
#define bFM3_GPIO_PDIR7_P3                     *((volatile unsigned int*)(0x4266638CUL))
#define bFM3_GPIO_PDIR7_P4                     *((volatile unsigned int*)(0x42666390UL))
#define bFM3_GPIO_PDIR7_P5                     *((volatile unsigned int*)(0x42666394UL))
#define bFM3_GPIO_PDIR7_P6                     *((volatile unsigned int*)(0x42666398UL))
#define bFM3_GPIO_PDIR7_P7                     *((volatile unsigned int*)(0x4266639CUL))
#define bFM3_GPIO_PDIR7_P8                     *((volatile unsigned int*)(0x426663A0UL))
#define bFM3_GPIO_PDIR7_P9                     *((volatile unsigned int*)(0x426663A4UL))
#define bFM3_GPIO_PDIR7_PA                     *((volatile unsigned int*)(0x426663A8UL))
#define bFM3_GPIO_PDIR7_PB                     *((volatile unsigned int*)(0x426663ACUL))
#define bFM3_GPIO_PDIR7_PC                     *((volatile unsigned int*)(0x426663B0UL))
#define bFM3_GPIO_PDIR7_PD                     *((volatile unsigned int*)(0x426663B4UL))
#define bFM3_GPIO_PDIR7_PE                     *((volatile unsigned int*)(0x426663B8UL))
#define bFM3_GPIO_PDIR7_PF                     *((volatile unsigned int*)(0x426663BCUL))
#define bFM3_GPIO_PDIR8_P0                     *((volatile unsigned int*)(0x42666400UL))
#define bFM3_GPIO_PDIR8_P1                     *((volatile unsigned int*)(0x42666404UL))
#define bFM3_GPIO_PDIR8_P2                     *((volatile unsigned int*)(0x42666408UL))
#define bFM3_GPIO_PDIR8_P3                     *((volatile unsigned int*)(0x4266640CUL))
#define bFM3_GPIO_PDIR9_P0                     *((volatile unsigned int*)(0x42666480UL))
#define bFM3_GPIO_PDIR9_P1                     *((volatile unsigned int*)(0x42666484UL))
#define bFM3_GPIO_PDIR9_P2                     *((volatile unsigned int*)(0x42666488UL))
#define bFM3_GPIO_PDIR9_P3                     *((volatile unsigned int*)(0x4266648CUL))
#define bFM3_GPIO_PDIR9_P4                     *((volatile unsigned int*)(0x42666490UL))
#define bFM3_GPIO_PDIR9_P5                     *((volatile unsigned int*)(0x42666494UL))
#define bFM3_GPIO_PDIRA_P0                     *((volatile unsigned int*)(0x42666500UL))
#define bFM3_GPIO_PDIRA_P1                     *((volatile unsigned int*)(0x42666504UL))
#define bFM3_GPIO_PDIRA_P2                     *((volatile unsigned int*)(0x42666508UL))
#define bFM3_GPIO_PDIRA_P3                     *((volatile unsigned int*)(0x4266650CUL))
#define bFM3_GPIO_PDIRA_P4                     *((volatile unsigned int*)(0x42666510UL))
#define bFM3_GPIO_PDIRA_P5                     *((volatile unsigned int*)(0x42666514UL))
#define bFM3_GPIO_PDIRB_P0                     *((volatile unsigned int*)(0x42666580UL))
#define bFM3_GPIO_PDIRB_P1                     *((volatile unsigned int*)(0x42666584UL))
#define bFM3_GPIO_PDIRB_P2                     *((volatile unsigned int*)(0x42666588UL))
#define bFM3_GPIO_PDIRB_P3                     *((volatile unsigned int*)(0x4266658CUL))
#define bFM3_GPIO_PDIRB_P4                     *((volatile unsigned int*)(0x42666590UL))
#define bFM3_GPIO_PDIRB_P5                     *((volatile unsigned int*)(0x42666594UL))
#define bFM3_GPIO_PDIRB_P6                     *((volatile unsigned int*)(0x42666598UL))
#define bFM3_GPIO_PDIRB_P7                     *((volatile unsigned int*)(0x4266659CUL))
#define bFM3_GPIO_PDIRC_P0                     *((volatile unsigned int*)(0x42666600UL))
#define bFM3_GPIO_PDIRC_P1                     *((volatile unsigned int*)(0x42666604UL))
#define bFM3_GPIO_PDIRC_P2                     *((volatile unsigned int*)(0x42666608UL))
#define bFM3_GPIO_PDIRC_P3                     *((volatile unsigned int*)(0x4266660CUL))
#define bFM3_GPIO_PDIRC_P4                     *((volatile unsigned int*)(0x42666610UL))
#define bFM3_GPIO_PDIRC_P5                     *((volatile unsigned int*)(0x42666614UL))
#define bFM3_GPIO_PDIRC_P6                     *((volatile unsigned int*)(0x42666618UL))
#define bFM3_GPIO_PDIRC_P7                     *((volatile unsigned int*)(0x4266661CUL))
#define bFM3_GPIO_PDIRC_P8                     *((volatile unsigned int*)(0x42666620UL))
#define bFM3_GPIO_PDIRC_P9                     *((volatile unsigned int*)(0x42666624UL))
#define bFM3_GPIO_PDIRC_PA                     *((volatile unsigned int*)(0x42666628UL))
#define bFM3_GPIO_PDIRC_PB                     *((volatile unsigned int*)(0x4266662CUL))
#define bFM3_GPIO_PDIRC_PC                     *((volatile unsigned int*)(0x42666630UL))
#define bFM3_GPIO_PDIRC_PD                     *((volatile unsigned int*)(0x42666634UL))
#define bFM3_GPIO_PDIRC_PE                     *((volatile unsigned int*)(0x42666638UL))
#define bFM3_GPIO_PDIRC_PF                     *((volatile unsigned int*)(0x4266663CUL))
#define bFM3_GPIO_PDIRD_P0                     *((volatile unsigned int*)(0x42666680UL))
#define bFM3_GPIO_PDIRD_P1                     *((volatile unsigned int*)(0x42666684UL))
#define bFM3_GPIO_PDIRD_P2                     *((volatile unsigned int*)(0x42666688UL))
#define bFM3_GPIO_PDIRD_P3                     *((volatile unsigned int*)(0x4266668CUL))
#define bFM3_GPIO_PDIRE_P0                     *((volatile unsigned int*)(0x42666700UL))
#define bFM3_GPIO_PDIRE_P2                     *((volatile unsigned int*)(0x42666708UL))
#define bFM3_GPIO_PDIRE_P3                     *((volatile unsigned int*)(0x4266670CUL))
#define bFM3_GPIO_PDIRF_P0                     *((volatile unsigned int*)(0x42666780UL))
#define bFM3_GPIO_PDIRF_P1                     *((volatile unsigned int*)(0x42666784UL))
#define bFM3_GPIO_PDIRF_P2                     *((volatile unsigned int*)(0x42666788UL))
#define bFM3_GPIO_PDIRF_P3                     *((volatile unsigned int*)(0x4266678CUL))
#define bFM3_GPIO_PDIRF_P4                     *((volatile unsigned int*)(0x42666790UL))
#define bFM3_GPIO_PDIRF_P5                     *((volatile unsigned int*)(0x42666794UL))
#define bFM3_GPIO_PDIRF_P6                     *((volatile unsigned int*)(0x42666798UL))
#define bFM3_GPIO_PDOR0_P0                     *((volatile unsigned int*)(0x42668000UL))
#define bFM3_GPIO_PDOR0_P1                     *((volatile unsigned int*)(0x42668004UL))
#define bFM3_GPIO_PDOR0_P2                     *((volatile unsigned int*)(0x42668008UL))
#define bFM3_GPIO_PDOR0_P3                     *((volatile unsigned int*)(0x4266800CUL))
#define bFM3_GPIO_PDOR0_P4                     *((volatile unsigned int*)(0x42668010UL))
#define bFM3_GPIO_PDOR0_P5                     *((volatile unsigned int*)(0x42668014UL))
#define bFM3_GPIO_PDOR0_P6                     *((volatile unsigned int*)(0x42668018UL))
#define bFM3_GPIO_PDOR0_P7                     *((volatile unsigned int*)(0x4266801CUL))
#define bFM3_GPIO_PDOR0_P8                     *((volatile unsigned int*)(0x42668020UL))
#define bFM3_GPIO_PDOR0_P9                     *((volatile unsigned int*)(0x42668024UL))
#define bFM3_GPIO_PDOR1_P0                     *((volatile unsigned int*)(0x42668080UL))
#define bFM3_GPIO_PDOR1_P1                     *((volatile unsigned int*)(0x42668084UL))
#define bFM3_GPIO_PDOR1_P2                     *((volatile unsigned int*)(0x42668088UL))
#define bFM3_GPIO_PDOR1_P3                     *((volatile unsigned int*)(0x4266808CUL))
#define bFM3_GPIO_PDOR1_P4                     *((volatile unsigned int*)(0x42668090UL))
#define bFM3_GPIO_PDOR1_P5                     *((volatile unsigned int*)(0x42668094UL))
#define bFM3_GPIO_PDOR1_P6                     *((volatile unsigned int*)(0x42668098UL))
#define bFM3_GPIO_PDOR1_P7                     *((volatile unsigned int*)(0x4266809CUL))
#define bFM3_GPIO_PDOR1_P8                     *((volatile unsigned int*)(0x426680A0UL))
#define bFM3_GPIO_PDOR1_P9                     *((volatile unsigned int*)(0x426680A4UL))
#define bFM3_GPIO_PDOR1_PA                     *((volatile unsigned int*)(0x426680A8UL))
#define bFM3_GPIO_PDOR1_PB                     *((volatile unsigned int*)(0x426680ACUL))
#define bFM3_GPIO_PDOR1_PC                     *((volatile unsigned int*)(0x426680B0UL))
#define bFM3_GPIO_PDOR1_PD                     *((volatile unsigned int*)(0x426680B4UL))
#define bFM3_GPIO_PDOR1_PE                     *((volatile unsigned int*)(0x426680B8UL))
#define bFM3_GPIO_PDOR1_PF                     *((volatile unsigned int*)(0x426680BCUL))
#define bFM3_GPIO_PDOR2_P0                     *((volatile unsigned int*)(0x42668100UL))
#define bFM3_GPIO_PDOR2_P1                     *((volatile unsigned int*)(0x42668104UL))
#define bFM3_GPIO_PDOR2_P2                     *((volatile unsigned int*)(0x42668108UL))
#define bFM3_GPIO_PDOR2_P3                     *((volatile unsigned int*)(0x4266810CUL))
#define bFM3_GPIO_PDOR2_P4                     *((volatile unsigned int*)(0x42668110UL))
#define bFM3_GPIO_PDOR2_P5                     *((volatile unsigned int*)(0x42668114UL))
#define bFM3_GPIO_PDOR2_P6                     *((volatile unsigned int*)(0x42668118UL))
#define bFM3_GPIO_PDOR2_P7                     *((volatile unsigned int*)(0x4266811CUL))
#define bFM3_GPIO_PDOR2_P8                     *((volatile unsigned int*)(0x42668120UL))
#define bFM3_GPIO_PDOR2_P9                     *((volatile unsigned int*)(0x42668124UL))
#define bFM3_GPIO_PDOR3_P0                     *((volatile unsigned int*)(0x42668180UL))
#define bFM3_GPIO_PDOR3_P1                     *((volatile unsigned int*)(0x42668184UL))
#define bFM3_GPIO_PDOR3_P2                     *((volatile unsigned int*)(0x42668188UL))
#define bFM3_GPIO_PDOR3_P3                     *((volatile unsigned int*)(0x4266818CUL))
#define bFM3_GPIO_PDOR3_P4                     *((volatile unsigned int*)(0x42668190UL))
#define bFM3_GPIO_PDOR3_P5                     *((volatile unsigned int*)(0x42668194UL))
#define bFM3_GPIO_PDOR3_P6                     *((volatile unsigned int*)(0x42668198UL))
#define bFM3_GPIO_PDOR3_P7                     *((volatile unsigned int*)(0x4266819CUL))
#define bFM3_GPIO_PDOR3_P8                     *((volatile unsigned int*)(0x426681A0UL))
#define bFM3_GPIO_PDOR3_P9                     *((volatile unsigned int*)(0x426681A4UL))
#define bFM3_GPIO_PDOR3_PA                     *((volatile unsigned int*)(0x426681A8UL))
#define bFM3_GPIO_PDOR3_PB                     *((volatile unsigned int*)(0x426681ACUL))
#define bFM3_GPIO_PDOR3_PC                     *((volatile unsigned int*)(0x426681B0UL))
#define bFM3_GPIO_PDOR3_PD                     *((volatile unsigned int*)(0x426681B4UL))
#define bFM3_GPIO_PDOR3_PE                     *((volatile unsigned int*)(0x426681B8UL))
#define bFM3_GPIO_PDOR3_PF                     *((volatile unsigned int*)(0x426681BCUL))
#define bFM3_GPIO_PDOR4_P0                     *((volatile unsigned int*)(0x42668200UL))
#define bFM3_GPIO_PDOR4_P1                     *((volatile unsigned int*)(0x42668204UL))
#define bFM3_GPIO_PDOR4_P2                     *((volatile unsigned int*)(0x42668208UL))
#define bFM3_GPIO_PDOR4_P3                     *((volatile unsigned int*)(0x4266820CUL))
#define bFM3_GPIO_PDOR4_P4                     *((volatile unsigned int*)(0x42668210UL))
#define bFM3_GPIO_PDOR4_P5                     *((volatile unsigned int*)(0x42668214UL))
#define bFM3_GPIO_PDOR4_P6                     *((volatile unsigned int*)(0x42668218UL))
#define bFM3_GPIO_PDOR4_P7                     *((volatile unsigned int*)(0x4266821CUL))
#define bFM3_GPIO_PDOR4_P8                     *((volatile unsigned int*)(0x42668220UL))
#define bFM3_GPIO_PDOR4_P9                     *((volatile unsigned int*)(0x42668224UL))
#define bFM3_GPIO_PDOR4_PA                     *((volatile unsigned int*)(0x42668228UL))
#define bFM3_GPIO_PDOR4_PB                     *((volatile unsigned int*)(0x4266822CUL))
#define bFM3_GPIO_PDOR4_PC                     *((volatile unsigned int*)(0x42668230UL))
#define bFM3_GPIO_PDOR4_PD                     *((volatile unsigned int*)(0x42668234UL))
#define bFM3_GPIO_PDOR4_PE                     *((volatile unsigned int*)(0x42668238UL))
#define bFM3_GPIO_PDOR5_P0                     *((volatile unsigned int*)(0x42668280UL))
#define bFM3_GPIO_PDOR5_P1                     *((volatile unsigned int*)(0x42668284UL))
#define bFM3_GPIO_PDOR5_P2                     *((volatile unsigned int*)(0x42668288UL))
#define bFM3_GPIO_PDOR5_P3                     *((volatile unsigned int*)(0x4266828CUL))
#define bFM3_GPIO_PDOR5_P4                     *((volatile unsigned int*)(0x42668290UL))
#define bFM3_GPIO_PDOR5_P5                     *((volatile unsigned int*)(0x42668294UL))
#define bFM3_GPIO_PDOR5_P6                     *((volatile unsigned int*)(0x42668298UL))
#define bFM3_GPIO_PDOR5_P7                     *((volatile unsigned int*)(0x4266829CUL))
#define bFM3_GPIO_PDOR5_P8                     *((volatile unsigned int*)(0x426682A0UL))
#define bFM3_GPIO_PDOR5_P9                     *((volatile unsigned int*)(0x426682A4UL))
#define bFM3_GPIO_PDOR5_PA                     *((volatile unsigned int*)(0x426682A8UL))
#define bFM3_GPIO_PDOR5_PB                     *((volatile unsigned int*)(0x426682ACUL))
#define bFM3_GPIO_PDOR5_PC                     *((volatile unsigned int*)(0x426682B0UL))
#define bFM3_GPIO_PDOR5_PD                     *((volatile unsigned int*)(0x426682B4UL))
#define bFM3_GPIO_PDOR6_P0                     *((volatile unsigned int*)(0x42668300UL))
#define bFM3_GPIO_PDOR6_P1                     *((volatile unsigned int*)(0x42668304UL))
#define bFM3_GPIO_PDOR6_P2                     *((volatile unsigned int*)(0x42668308UL))
#define bFM3_GPIO_PDOR7_P0                     *((volatile unsigned int*)(0x42668380UL))
#define bFM3_GPIO_PDOR7_P1                     *((volatile unsigned int*)(0x42668384UL))
#define bFM3_GPIO_PDOR7_P2                     *((volatile unsigned int*)(0x42668388UL))
#define bFM3_GPIO_PDOR7_P3                     *((volatile unsigned int*)(0x4266838CUL))
#define bFM3_GPIO_PDOR7_P4                     *((volatile unsigned int*)(0x42668390UL))
#define bFM3_GPIO_PDOR7_P5                     *((volatile unsigned int*)(0x42668394UL))
#define bFM3_GPIO_PDOR7_P6                     *((volatile unsigned int*)(0x42668398UL))
#define bFM3_GPIO_PDOR7_P7                     *((volatile unsigned int*)(0x4266839CUL))
#define bFM3_GPIO_PDOR7_P8                     *((volatile unsigned int*)(0x426683A0UL))
#define bFM3_GPIO_PDOR7_P9                     *((volatile unsigned int*)(0x426683A4UL))
#define bFM3_GPIO_PDOR7_PA                     *((volatile unsigned int*)(0x426683A8UL))
#define bFM3_GPIO_PDOR7_PB                     *((volatile unsigned int*)(0x426683ACUL))
#define bFM3_GPIO_PDOR7_PC                     *((volatile unsigned int*)(0x426683B0UL))
#define bFM3_GPIO_PDOR7_PD                     *((volatile unsigned int*)(0x426683B4UL))
#define bFM3_GPIO_PDOR7_PE                     *((volatile unsigned int*)(0x426683B8UL))
#define bFM3_GPIO_PDOR7_PF                     *((volatile unsigned int*)(0x426683BCUL))
#define bFM3_GPIO_PDOR8_P0                     *((volatile unsigned int*)(0x42668400UL))
#define bFM3_GPIO_PDOR8_P1                     *((volatile unsigned int*)(0x42668404UL))
#define bFM3_GPIO_PDOR8_P2                     *((volatile unsigned int*)(0x42668408UL))
#define bFM3_GPIO_PDOR8_P3                     *((volatile unsigned int*)(0x4266840CUL))
#define bFM3_GPIO_PDOR9_P0                     *((volatile unsigned int*)(0x42668480UL))
#define bFM3_GPIO_PDOR9_P1                     *((volatile unsigned int*)(0x42668484UL))
#define bFM3_GPIO_PDOR9_P2                     *((volatile unsigned int*)(0x42668488UL))
#define bFM3_GPIO_PDOR9_P3                     *((volatile unsigned int*)(0x4266848CUL))
#define bFM3_GPIO_PDOR9_P4                     *((volatile unsigned int*)(0x42668490UL))
#define bFM3_GPIO_PDOR9_P5                     *((volatile unsigned int*)(0x42668494UL))
#define bFM3_GPIO_PDORA_P0                     *((volatile unsigned int*)(0x42668500UL))
#define bFM3_GPIO_PDORA_P1                     *((volatile unsigned int*)(0x42668504UL))
#define bFM3_GPIO_PDORA_P2                     *((volatile unsigned int*)(0x42668508UL))
#define bFM3_GPIO_PDORA_P3                     *((volatile unsigned int*)(0x4266850CUL))
#define bFM3_GPIO_PDORA_P4                     *((volatile unsigned int*)(0x42668510UL))
#define bFM3_GPIO_PDORA_P5                     *((volatile unsigned int*)(0x42668514UL))
#define bFM3_GPIO_PDORB_P0                     *((volatile unsigned int*)(0x42668580UL))
#define bFM3_GPIO_PDORB_P1                     *((volatile unsigned int*)(0x42668584UL))
#define bFM3_GPIO_PDORB_P2                     *((volatile unsigned int*)(0x42668588UL))
#define bFM3_GPIO_PDORB_P3                     *((volatile unsigned int*)(0x4266858CUL))
#define bFM3_GPIO_PDORB_P4                     *((volatile unsigned int*)(0x42668590UL))
#define bFM3_GPIO_PDORB_P5                     *((volatile unsigned int*)(0x42668594UL))
#define bFM3_GPIO_PDORB_P6                     *((volatile unsigned int*)(0x42668598UL))
#define bFM3_GPIO_PDORB_P7                     *((volatile unsigned int*)(0x4266859CUL))
#define bFM3_GPIO_PDORC_P0                     *((volatile unsigned int*)(0x42668600UL))
#define bFM3_GPIO_PDORC_P1                     *((volatile unsigned int*)(0x42668604UL))
#define bFM3_GPIO_PDORC_P2                     *((volatile unsigned int*)(0x42668608UL))
#define bFM3_GPIO_PDORC_P3                     *((volatile unsigned int*)(0x4266860CUL))
#define bFM3_GPIO_PDORC_P4                     *((volatile unsigned int*)(0x42668610UL))
#define bFM3_GPIO_PDORC_P5                     *((volatile unsigned int*)(0x42668614UL))
#define bFM3_GPIO_PDORC_P6                     *((volatile unsigned int*)(0x42668618UL))
#define bFM3_GPIO_PDORC_P7                     *((volatile unsigned int*)(0x4266861CUL))
#define bFM3_GPIO_PDORC_P8                     *((volatile unsigned int*)(0x42668620UL))
#define bFM3_GPIO_PDORC_P9                     *((volatile unsigned int*)(0x42668624UL))
#define bFM3_GPIO_PDORC_PA                     *((volatile unsigned int*)(0x42668628UL))
#define bFM3_GPIO_PDORC_PB                     *((volatile unsigned int*)(0x4266862CUL))
#define bFM3_GPIO_PDORC_PC                     *((volatile unsigned int*)(0x42668630UL))
#define bFM3_GPIO_PDORC_PD                     *((volatile unsigned int*)(0x42668634UL))
#define bFM3_GPIO_PDORC_PE                     *((volatile unsigned int*)(0x42668638UL))
#define bFM3_GPIO_PDORC_PF                     *((volatile unsigned int*)(0x4266863CUL))
#define bFM3_GPIO_PDORD_P0                     *((volatile unsigned int*)(0x42668680UL))
#define bFM3_GPIO_PDORD_P1                     *((volatile unsigned int*)(0x42668684UL))
#define bFM3_GPIO_PDORD_P2                     *((volatile unsigned int*)(0x42668688UL))
#define bFM3_GPIO_PDORD_P3                     *((volatile unsigned int*)(0x4266868CUL))
#define bFM3_GPIO_PDORE_P0                     *((volatile unsigned int*)(0x42668700UL))
#define bFM3_GPIO_PDORE_P2                     *((volatile unsigned int*)(0x42668708UL))
#define bFM3_GPIO_PDORE_P3                     *((volatile unsigned int*)(0x4266870CUL))
#define bFM3_GPIO_PDORF_P0                     *((volatile unsigned int*)(0x42668780UL))
#define bFM3_GPIO_PDORF_P1                     *((volatile unsigned int*)(0x42668784UL))
#define bFM3_GPIO_PDORF_P2                     *((volatile unsigned int*)(0x42668788UL))
#define bFM3_GPIO_PDORF_P3                     *((volatile unsigned int*)(0x4266878CUL))
#define bFM3_GPIO_PDORF_P4                     *((volatile unsigned int*)(0x42668790UL))
#define bFM3_GPIO_PDORF_P5                     *((volatile unsigned int*)(0x42668794UL))
#define bFM3_GPIO_PDORF_P6                     *((volatile unsigned int*)(0x42668798UL))
#define bFM3_GPIO_ADE_AN0                      *((volatile unsigned int*)(0x4266A000UL))
#define bFM3_GPIO_ADE_AN1                      *((volatile unsigned int*)(0x4266A004UL))
#define bFM3_GPIO_ADE_AN2                      *((volatile unsigned int*)(0x4266A008UL))
#define bFM3_GPIO_ADE_AN3                      *((volatile unsigned int*)(0x4266A00CUL))
#define bFM3_GPIO_ADE_AN4                      *((volatile unsigned int*)(0x4266A010UL))
#define bFM3_GPIO_ADE_AN5                      *((volatile unsigned int*)(0x4266A014UL))
#define bFM3_GPIO_ADE_AN6                      *((volatile unsigned int*)(0x4266A018UL))
#define bFM3_GPIO_ADE_AN7                      *((volatile unsigned int*)(0x4266A01CUL))
#define bFM3_GPIO_ADE_AN8                      *((volatile unsigned int*)(0x4266A020UL))
#define bFM3_GPIO_ADE_AN9                      *((volatile unsigned int*)(0x4266A024UL))
#define bFM3_GPIO_ADE_AN10                     *((volatile unsigned int*)(0x4266A028UL))
#define bFM3_GPIO_ADE_AN11                     *((volatile unsigned int*)(0x4266A02CUL))
#define bFM3_GPIO_ADE_AN12                     *((volatile unsigned int*)(0x4266A030UL))
#define bFM3_GPIO_ADE_AN13                     *((volatile unsigned int*)(0x4266A034UL))
#define bFM3_GPIO_ADE_AN14                     *((volatile unsigned int*)(0x4266A038UL))
#define bFM3_GPIO_ADE_AN15                     *((volatile unsigned int*)(0x4266A03CUL))
#define bFM3_GPIO_ADE_AN16                     *((volatile unsigned int*)(0x4266A040UL))
#define bFM3_GPIO_ADE_AN17                     *((volatile unsigned int*)(0x4266A044UL))
#define bFM3_GPIO_ADE_AN18                     *((volatile unsigned int*)(0x4266A048UL))
#define bFM3_GPIO_ADE_AN19                     *((volatile unsigned int*)(0x4266A04CUL))
#define bFM3_GPIO_ADE_AN20                     *((volatile unsigned int*)(0x4266A050UL))
#define bFM3_GPIO_ADE_AN21                     *((volatile unsigned int*)(0x4266A054UL))
#define bFM3_GPIO_ADE_AN22                     *((volatile unsigned int*)(0x4266A058UL))
#define bFM3_GPIO_ADE_AN23                     *((volatile unsigned int*)(0x4266A05CUL))
#define bFM3_GPIO_ADE_AN24                     *((volatile unsigned int*)(0x4266A060UL))
#define bFM3_GPIO_ADE_AN25                     *((volatile unsigned int*)(0x4266A064UL))
#define bFM3_GPIO_ADE_AN26                     *((volatile unsigned int*)(0x4266A068UL))
#define bFM3_GPIO_ADE_AN27                     *((volatile unsigned int*)(0x4266A06CUL))
#define bFM3_GPIO_ADE_AN28                     *((volatile unsigned int*)(0x4266A070UL))
#define bFM3_GPIO_ADE_AN29                     *((volatile unsigned int*)(0x4266A074UL))
#define bFM3_GPIO_ADE_AN30                     *((volatile unsigned int*)(0x4266A078UL))
#define bFM3_GPIO_ADE_AN31                     *((volatile unsigned int*)(0x4266A07CUL))
#define bFM3_GPIO_SPSR_SUBXC                   *((volatile unsigned int*)(0x4266B000UL))
#define bFM3_GPIO_SPSR_MAINXC                  *((volatile unsigned int*)(0x4266B008UL))
#define bFM3_GPIO_SPSR_USB0C                   *((volatile unsigned int*)(0x4266B010UL))
#define bFM3_GPIO_SPSR_USB1C                   *((volatile unsigned int*)(0x4266B014UL))
#define bFM3_GPIO_EPFR00_NMIS                  *((volatile unsigned int*)(0x4266C000UL))
#define bFM3_GPIO_EPFR00_CROUTE0               *((volatile unsigned int*)(0x4266C004UL))
#define bFM3_GPIO_EPFR00_CROUTE1               *((volatile unsigned int*)(0x4266C008UL))
#define bFM3_GPIO_EPFR00_SUBOUTE0              *((volatile unsigned int*)(0x4266C018UL))
#define bFM3_GPIO_EPFR00_SUBOUTE1              *((volatile unsigned int*)(0x4266C01CUL))
#define bFM3_GPIO_EPFR00_USBP0E                *((volatile unsigned int*)(0x4266C024UL))
#define bFM3_GPIO_EPFR00_USBP1E                *((volatile unsigned int*)(0x4266C034UL))
#define bFM3_GPIO_EPFR00_JTAGEN0B              *((volatile unsigned int*)(0x4266C040UL))
#define bFM3_GPIO_EPFR00_JTAGEN1S              *((volatile unsigned int*)(0x4266C044UL))
#define bFM3_GPIO_EPFR00_TRC0E                 *((volatile unsigned int*)(0x4266C060UL))
#define bFM3_GPIO_EPFR00_TRC1E                 *((volatile unsigned int*)(0x4266C064UL))
#define bFM3_GPIO_EPFR01_RTO00E0               *((volatile unsigned int*)(0x4266C080UL))
#define bFM3_GPIO_EPFR01_RTO00E1               *((volatile unsigned int*)(0x4266C084UL))
#define bFM3_GPIO_EPFR01_RTO01E0               *((volatile unsigned int*)(0x4266C088UL))
#define bFM3_GPIO_EPFR01_RTO01E1               *((volatile unsigned int*)(0x4266C08CUL))
#define bFM3_GPIO_EPFR01_RTO02E0               *((volatile unsigned int*)(0x4266C090UL))
#define bFM3_GPIO_EPFR01_RTO02E1               *((volatile unsigned int*)(0x4266C094UL))
#define bFM3_GPIO_EPFR01_RTO03E0               *((volatile unsigned int*)(0x4266C098UL))
#define bFM3_GPIO_EPFR01_RTO03E1               *((volatile unsigned int*)(0x4266C09CUL))
#define bFM3_GPIO_EPFR01_RTO04E0               *((volatile unsigned int*)(0x4266C0A0UL))
#define bFM3_GPIO_EPFR01_RTO04E1               *((volatile unsigned int*)(0x4266C0A4UL))
#define bFM3_GPIO_EPFR01_RTO05E0               *((volatile unsigned int*)(0x4266C0A8UL))
#define bFM3_GPIO_EPFR01_RTO05E1               *((volatile unsigned int*)(0x4266C0ACUL))
#define bFM3_GPIO_EPFR01_DTTI0C                *((volatile unsigned int*)(0x4266C0B0UL))
#define bFM3_GPIO_EPFR01_DTTI0S0               *((volatile unsigned int*)(0x4266C0C0UL))
#define bFM3_GPIO_EPFR01_DTTI0S1               *((volatile unsigned int*)(0x4266C0C4UL))
#define bFM3_GPIO_EPFR01_FRCK0S0               *((volatile unsigned int*)(0x4266C0C8UL))
#define bFM3_GPIO_EPFR01_FRCK0S1               *((volatile unsigned int*)(0x4266C0CCUL))
#define bFM3_GPIO_EPFR01_IC00S0                *((volatile unsigned int*)(0x4266C0D0UL))
#define bFM3_GPIO_EPFR01_IC00S1                *((volatile unsigned int*)(0x4266C0D4UL))
#define bFM3_GPIO_EPFR01_IC00S2                *((volatile unsigned int*)(0x4266C0D8UL))
#define bFM3_GPIO_EPFR01_IC01S0                *((volatile unsigned int*)(0x4266C0DCUL))
#define bFM3_GPIO_EPFR01_IC01S1                *((volatile unsigned int*)(0x4266C0E0UL))
#define bFM3_GPIO_EPFR01_IC01S2                *((volatile unsigned int*)(0x4266C0E4UL))
#define bFM3_GPIO_EPFR01_IC02S0                *((volatile unsigned int*)(0x4266C0E8UL))
#define bFM3_GPIO_EPFR01_IC02S1                *((volatile unsigned int*)(0x4266C0ECUL))
#define bFM3_GPIO_EPFR01_IC02S2                *((volatile unsigned int*)(0x4266C0F0UL))
#define bFM3_GPIO_EPFR01_IC03S0                *((volatile unsigned int*)(0x4266C0F4UL))
#define bFM3_GPIO_EPFR01_IC03S1                *((volatile unsigned int*)(0x4266C0F8UL))
#define bFM3_GPIO_EPFR01_IC03S2                *((volatile unsigned int*)(0x4266C0FCUL))
#define bFM3_GPIO_EPFR02_RTO10E0               *((volatile unsigned int*)(0x4266C100UL))
#define bFM3_GPIO_EPFR02_RTO10E1               *((volatile unsigned int*)(0x4266C104UL))
#define bFM3_GPIO_EPFR02_RTO11E0               *((volatile unsigned int*)(0x4266C108UL))
#define bFM3_GPIO_EPFR02_RTO11E1               *((volatile unsigned int*)(0x4266C10CUL))
#define bFM3_GPIO_EPFR02_RTO12E0               *((volatile unsigned int*)(0x4266C110UL))
#define bFM3_GPIO_EPFR02_RTO12E1               *((volatile unsigned int*)(0x4266C114UL))
#define bFM3_GPIO_EPFR02_RTO13E0               *((volatile unsigned int*)(0x4266C118UL))
#define bFM3_GPIO_EPFR02_RTO13E1               *((volatile unsigned int*)(0x4266C11CUL))
#define bFM3_GPIO_EPFR02_RTO14E0               *((volatile unsigned int*)(0x4266C120UL))
#define bFM3_GPIO_EPFR02_RTO14E1               *((volatile unsigned int*)(0x4266C124UL))
#define bFM3_GPIO_EPFR02_RTO15E0               *((volatile unsigned int*)(0x4266C128UL))
#define bFM3_GPIO_EPFR02_RTO15E1               *((volatile unsigned int*)(0x4266C12CUL))
#define bFM3_GPIO_EPFR02_DTTI1C                *((volatile unsigned int*)(0x4266C130UL))
#define bFM3_GPIO_EPFR02_DTTI1S0               *((volatile unsigned int*)(0x4266C140UL))
#define bFM3_GPIO_EPFR02_DTTI1S1               *((volatile unsigned int*)(0x4266C144UL))
#define bFM3_GPIO_EPFR02_FRCK1S0               *((volatile unsigned int*)(0x4266C148UL))
#define bFM3_GPIO_EPFR02_FRCK1S1               *((volatile unsigned int*)(0x4266C14CUL))
#define bFM3_GPIO_EPFR02_IC10S0                *((volatile unsigned int*)(0x4266C150UL))
#define bFM3_GPIO_EPFR02_IC10S1                *((volatile unsigned int*)(0x4266C154UL))
#define bFM3_GPIO_EPFR02_IC10S2                *((volatile unsigned int*)(0x4266C158UL))
#define bFM3_GPIO_EPFR02_IC11S0                *((volatile unsigned int*)(0x4266C15CUL))
#define bFM3_GPIO_EPFR02_IC11S1                *((volatile unsigned int*)(0x4266C160UL))
#define bFM3_GPIO_EPFR02_IC11S2                *((volatile unsigned int*)(0x4266C164UL))
#define bFM3_GPIO_EPFR02_IC12S0                *((volatile unsigned int*)(0x4266C168UL))
#define bFM3_GPIO_EPFR02_IC12S1                *((volatile unsigned int*)(0x4266C16CUL))
#define bFM3_GPIO_EPFR02_IC12S2                *((volatile unsigned int*)(0x4266C170UL))
#define bFM3_GPIO_EPFR02_IC13S0                *((volatile unsigned int*)(0x4266C174UL))
#define bFM3_GPIO_EPFR02_IC13S1                *((volatile unsigned int*)(0x4266C178UL))
#define bFM3_GPIO_EPFR02_IC13S2                *((volatile unsigned int*)(0x4266C17CUL))
#define bFM3_GPIO_EPFR03_RTO20E0               *((volatile unsigned int*)(0x4266C180UL))
#define bFM3_GPIO_EPFR03_RTO20E1               *((volatile unsigned int*)(0x4266C184UL))
#define bFM3_GPIO_EPFR03_RTO21E0               *((volatile unsigned int*)(0x4266C188UL))
#define bFM3_GPIO_EPFR03_RTO21E1               *((volatile unsigned int*)(0x4266C18CUL))
#define bFM3_GPIO_EPFR03_RTO22E0               *((volatile unsigned int*)(0x4266C190UL))
#define bFM3_GPIO_EPFR03_RTO22E1               *((volatile unsigned int*)(0x4266C194UL))
#define bFM3_GPIO_EPFR03_RTO23E0               *((volatile unsigned int*)(0x4266C198UL))
#define bFM3_GPIO_EPFR03_RTO23E1               *((volatile unsigned int*)(0x4266C19CUL))
#define bFM3_GPIO_EPFR03_RTO24E0               *((volatile unsigned int*)(0x4266C1A0UL))
#define bFM3_GPIO_EPFR03_RTO24E1               *((volatile unsigned int*)(0x4266C1A4UL))
#define bFM3_GPIO_EPFR03_RTO25E0               *((volatile unsigned int*)(0x4266C1A8UL))
#define bFM3_GPIO_EPFR03_RTO25E1               *((volatile unsigned int*)(0x4266C1ACUL))
#define bFM3_GPIO_EPFR03_DTTI2C                *((volatile unsigned int*)(0x4266C1B0UL))
#define bFM3_GPIO_EPFR03_DTTI2S0               *((volatile unsigned int*)(0x4266C1C0UL))
#define bFM3_GPIO_EPFR03_DTTI2S1               *((volatile unsigned int*)(0x4266C1C4UL))
#define bFM3_GPIO_EPFR03_FRCK2S0               *((volatile unsigned int*)(0x4266C1C8UL))
#define bFM3_GPIO_EPFR03_FRCK2S1               *((volatile unsigned int*)(0x4266C1CCUL))
#define bFM3_GPIO_EPFR03_IC20S0                *((volatile unsigned int*)(0x4266C1D0UL))
#define bFM3_GPIO_EPFR03_IC20S1                *((volatile unsigned int*)(0x4266C1D4UL))
#define bFM3_GPIO_EPFR03_IC20S2                *((volatile unsigned int*)(0x4266C1D8UL))
#define bFM3_GPIO_EPFR03_IC21S0                *((volatile unsigned int*)(0x4266C1DCUL))
#define bFM3_GPIO_EPFR03_IC21S1                *((volatile unsigned int*)(0x4266C1E0UL))
#define bFM3_GPIO_EPFR03_IC21S2                *((volatile unsigned int*)(0x4266C1E4UL))
#define bFM3_GPIO_EPFR03_IC22S0                *((volatile unsigned int*)(0x4266C1E8UL))
#define bFM3_GPIO_EPFR03_IC22S1                *((volatile unsigned int*)(0x4266C1ECUL))
#define bFM3_GPIO_EPFR03_IC22S2                *((volatile unsigned int*)(0x4266C1F0UL))
#define bFM3_GPIO_EPFR03_IC23S0                *((volatile unsigned int*)(0x4266C1F4UL))
#define bFM3_GPIO_EPFR03_IC23S1                *((volatile unsigned int*)(0x4266C1F8UL))
#define bFM3_GPIO_EPFR03_IC23S2                *((volatile unsigned int*)(0x4266C1FCUL))
#define bFM3_GPIO_EPFR04_TIOA0E0               *((volatile unsigned int*)(0x4266C208UL))
#define bFM3_GPIO_EPFR04_TIOA0E1               *((volatile unsigned int*)(0x4266C20CUL))
#define bFM3_GPIO_EPFR04_TIOB0S0               *((volatile unsigned int*)(0x4266C210UL))
#define bFM3_GPIO_EPFR04_TIOB0S1               *((volatile unsigned int*)(0x4266C214UL))
#define bFM3_GPIO_EPFR04_TIOA1S0               *((volatile unsigned int*)(0x4266C220UL))
#define bFM3_GPIO_EPFR04_TIOA1S1               *((volatile unsigned int*)(0x4266C224UL))
#define bFM3_GPIO_EPFR04_TIOA1E0               *((volatile unsigned int*)(0x4266C228UL))
#define bFM3_GPIO_EPFR04_TIOA1E1               *((volatile unsigned int*)(0x4266C22CUL))
#define bFM3_GPIO_EPFR04_TIOB1S0               *((volatile unsigned int*)(0x4266C230UL))
#define bFM3_GPIO_EPFR04_TIOB1S1               *((volatile unsigned int*)(0x4266C234UL))
#define bFM3_GPIO_EPFR04_TIOA2E0               *((volatile unsigned int*)(0x4266C248UL))
#define bFM3_GPIO_EPFR04_TIOA2E1               *((volatile unsigned int*)(0x4266C24CUL))
#define bFM3_GPIO_EPFR04_TIOB2S0               *((volatile unsigned int*)(0x4266C250UL))
#define bFM3_GPIO_EPFR04_TIOB2S1               *((volatile unsigned int*)(0x4266C254UL))
#define bFM3_GPIO_EPFR04_TIOA3S0               *((volatile unsigned int*)(0x4266C260UL))
#define bFM3_GPIO_EPFR04_TIOA3S1               *((volatile unsigned int*)(0x4266C264UL))
#define bFM3_GPIO_EPFR04_TIOA3E0               *((volatile unsigned int*)(0x4266C268UL))
#define bFM3_GPIO_EPFR04_TIOA3E1               *((volatile unsigned int*)(0x4266C26CUL))
#define bFM3_GPIO_EPFR04_TIOB3S0               *((volatile unsigned int*)(0x4266C270UL))
#define bFM3_GPIO_EPFR04_TIOB3S1               *((volatile unsigned int*)(0x4266C274UL))
#define bFM3_GPIO_EPFR05_TIOA4E0               *((volatile unsigned int*)(0x4266C288UL))
#define bFM3_GPIO_EPFR05_TIOA4E1               *((volatile unsigned int*)(0x4266C28CUL))
#define bFM3_GPIO_EPFR05_TIOB4S0               *((volatile unsigned int*)(0x4266C290UL))
#define bFM3_GPIO_EPFR05_TIOB4S1               *((volatile unsigned int*)(0x4266C294UL))
#define bFM3_GPIO_EPFR05_TIOA5S0               *((volatile unsigned int*)(0x4266C2A0UL))
#define bFM3_GPIO_EPFR05_TIOA5S1               *((volatile unsigned int*)(0x4266C2A4UL))
#define bFM3_GPIO_EPFR05_TIOA5E0               *((volatile unsigned int*)(0x4266C2A8UL))
#define bFM3_GPIO_EPFR05_TIOA5E1               *((volatile unsigned int*)(0x4266C2ACUL))
#define bFM3_GPIO_EPFR05_TIOB5S0               *((volatile unsigned int*)(0x4266C2B0UL))
#define bFM3_GPIO_EPFR05_TIOB5S1               *((volatile unsigned int*)(0x4266C2B4UL))
#define bFM3_GPIO_EPFR05_TIOA6E0               *((volatile unsigned int*)(0x4266C2C8UL))
#define bFM3_GPIO_EPFR05_TIOA6E1               *((volatile unsigned int*)(0x4266C2CCUL))
#define bFM3_GPIO_EPFR05_TIOB6S0               *((volatile unsigned int*)(0x4266C2D0UL))
#define bFM3_GPIO_EPFR05_TIOB6S1               *((volatile unsigned int*)(0x4266C2D4UL))
#define bFM3_GPIO_EPFR05_TIOA7S0               *((volatile unsigned int*)(0x4266C2E0UL))
#define bFM3_GPIO_EPFR05_TIOA7S1               *((volatile unsigned int*)(0x4266C2E4UL))
#define bFM3_GPIO_EPFR05_TIOA7E0               *((volatile unsigned int*)(0x4266C2E8UL))
#define bFM3_GPIO_EPFR05_TIOA7E1               *((volatile unsigned int*)(0x4266C2ECUL))
#define bFM3_GPIO_EPFR05_TIOB7S0               *((volatile unsigned int*)(0x4266C2F0UL))
#define bFM3_GPIO_EPFR05_TIOB7S1               *((volatile unsigned int*)(0x4266C2F4UL))
#define bFM3_GPIO_EPFR06_EINT00S0              *((volatile unsigned int*)(0x4266C300UL))
#define bFM3_GPIO_EPFR06_EINT00S1              *((volatile unsigned int*)(0x4266C304UL))
#define bFM3_GPIO_EPFR06_EINT01S0              *((volatile unsigned int*)(0x4266C308UL))
#define bFM3_GPIO_EPFR06_EINT01S1              *((volatile unsigned int*)(0x4266C30CUL))
#define bFM3_GPIO_EPFR06_EINT02S0              *((volatile unsigned int*)(0x4266C310UL))
#define bFM3_GPIO_EPFR06_EINT02S1              *((volatile unsigned int*)(0x4266C314UL))
#define bFM3_GPIO_EPFR06_EINT03S0              *((volatile unsigned int*)(0x4266C318UL))
#define bFM3_GPIO_EPFR06_EINT03S1              *((volatile unsigned int*)(0x4266C31CUL))
#define bFM3_GPIO_EPFR06_EINT04S0              *((volatile unsigned int*)(0x4266C320UL))
#define bFM3_GPIO_EPFR06_EINT04S1              *((volatile unsigned int*)(0x4266C324UL))
#define bFM3_GPIO_EPFR06_EINT05S0              *((volatile unsigned int*)(0x4266C328UL))
#define bFM3_GPIO_EPFR06_EINT05S1              *((volatile unsigned int*)(0x4266C32CUL))
#define bFM3_GPIO_EPFR06_EINT06S0              *((volatile unsigned int*)(0x4266C330UL))
#define bFM3_GPIO_EPFR06_EINT06S1              *((volatile unsigned int*)(0x4266C334UL))
#define bFM3_GPIO_EPFR06_EINT07S0              *((volatile unsigned int*)(0x4266C338UL))
#define bFM3_GPIO_EPFR06_EINT07S1              *((volatile unsigned int*)(0x4266C33CUL))
#define bFM3_GPIO_EPFR06_EINT08S0              *((volatile unsigned int*)(0x4266C340UL))
#define bFM3_GPIO_EPFR06_EINT08S1              *((volatile unsigned int*)(0x4266C344UL))
#define bFM3_GPIO_EPFR06_EINT09S0              *((volatile unsigned int*)(0x4266C348UL))
#define bFM3_GPIO_EPFR06_EINT09S1              *((volatile unsigned int*)(0x4266C34CUL))
#define bFM3_GPIO_EPFR06_EINT10S0              *((volatile unsigned int*)(0x4266C350UL))
#define bFM3_GPIO_EPFR06_EINT10S1              *((volatile unsigned int*)(0x4266C354UL))
#define bFM3_GPIO_EPFR06_EINT11S0              *((volatile unsigned int*)(0x4266C358UL))
#define bFM3_GPIO_EPFR06_EINT11S1              *((volatile unsigned int*)(0x4266C35CUL))
#define bFM3_GPIO_EPFR06_EINT12S0              *((volatile unsigned int*)(0x4266C360UL))
#define bFM3_GPIO_EPFR06_EINT12S1              *((volatile unsigned int*)(0x4266C364UL))
#define bFM3_GPIO_EPFR06_EINT13S0              *((volatile unsigned int*)(0x4266C368UL))
#define bFM3_GPIO_EPFR06_EINT13S1              *((volatile unsigned int*)(0x4266C36CUL))
#define bFM3_GPIO_EPFR06_EINT14S0              *((volatile unsigned int*)(0x4266C370UL))
#define bFM3_GPIO_EPFR06_EINT14S1              *((volatile unsigned int*)(0x4266C374UL))
#define bFM3_GPIO_EPFR06_EINT15S0              *((volatile unsigned int*)(0x4266C378UL))
#define bFM3_GPIO_EPFR06_EINT15S1              *((volatile unsigned int*)(0x4266C37CUL))
#define bFM3_GPIO_EPFR07_SIN0S0                *((volatile unsigned int*)(0x4266C390UL))
#define bFM3_GPIO_EPFR07_SIN0S1                *((volatile unsigned int*)(0x4266C394UL))
#define bFM3_GPIO_EPFR07_SOT0B0                *((volatile unsigned int*)(0x4266C398UL))
#define bFM3_GPIO_EPFR07_SOT0B1                *((volatile unsigned int*)(0x4266C39CUL))
#define bFM3_GPIO_EPFR07_SCK0B0                *((volatile unsigned int*)(0x4266C3A0UL))
#define bFM3_GPIO_EPFR07_SCK0B1                *((volatile unsigned int*)(0x4266C3A4UL))
#define bFM3_GPIO_EPFR07_SIN1S0                *((volatile unsigned int*)(0x4266C3A8UL))
#define bFM3_GPIO_EPFR07_SIN1S1                *((volatile unsigned int*)(0x4266C3ACUL))
#define bFM3_GPIO_EPFR07_SOT1B0                *((volatile unsigned int*)(0x4266C3B0UL))
#define bFM3_GPIO_EPFR07_SOT1B1                *((volatile unsigned int*)(0x4266C3B4UL))
#define bFM3_GPIO_EPFR07_SCK1B0                *((volatile unsigned int*)(0x4266C3B8UL))
#define bFM3_GPIO_EPFR07_SCK1B1                *((volatile unsigned int*)(0x4266C3BCUL))
#define bFM3_GPIO_EPFR07_SIN2S0                *((volatile unsigned int*)(0x4266C3C0UL))
#define bFM3_GPIO_EPFR07_SIN2S1                *((volatile unsigned int*)(0x4266C3C4UL))
#define bFM3_GPIO_EPFR07_SOT2B0                *((volatile unsigned int*)(0x4266C3C8UL))
#define bFM3_GPIO_EPFR07_SOT2B1                *((volatile unsigned int*)(0x4266C3CCUL))
#define bFM3_GPIO_EPFR07_SCK2B0                *((volatile unsigned int*)(0x4266C3D0UL))
#define bFM3_GPIO_EPFR07_SCK2B1                *((volatile unsigned int*)(0x4266C3D4UL))
#define bFM3_GPIO_EPFR07_SIN3S0                *((volatile unsigned int*)(0x4266C3D8UL))
#define bFM3_GPIO_EPFR07_SIN3S1                *((volatile unsigned int*)(0x4266C3DCUL))
#define bFM3_GPIO_EPFR07_SOT3B0                *((volatile unsigned int*)(0x4266C3E0UL))
#define bFM3_GPIO_EPFR07_SOT3B1                *((volatile unsigned int*)(0x4266C3E4UL))
#define bFM3_GPIO_EPFR07_SCK3B0                *((volatile unsigned int*)(0x4266C3E8UL))
#define bFM3_GPIO_EPFR07_SCK3B1                *((volatile unsigned int*)(0x4266C3ECUL))
#define bFM3_GPIO_EPFR08_RTS4E0                *((volatile unsigned int*)(0x4266C400UL))
#define bFM3_GPIO_EPFR08_RTS4E1                *((volatile unsigned int*)(0x4266C404UL))
#define bFM3_GPIO_EPFR08_CTS4S0                *((volatile unsigned int*)(0x4266C408UL))
#define bFM3_GPIO_EPFR08_CTS4S1                *((volatile unsigned int*)(0x4266C40CUL))
#define bFM3_GPIO_EPFR08_SIN4S0                *((volatile unsigned int*)(0x4266C410UL))
#define bFM3_GPIO_EPFR08_SIN4S1                *((volatile unsigned int*)(0x4266C414UL))
#define bFM3_GPIO_EPFR08_SOT4B0                *((volatile unsigned int*)(0x4266C418UL))
#define bFM3_GPIO_EPFR08_SOT4B1                *((volatile unsigned int*)(0x4266C41CUL))
#define bFM3_GPIO_EPFR08_SCK4B0                *((volatile unsigned int*)(0x4266C420UL))
#define bFM3_GPIO_EPFR08_SCK4B1                *((volatile unsigned int*)(0x4266C424UL))
#define bFM3_GPIO_EPFR08_SIN5S0                *((volatile unsigned int*)(0x4266C428UL))
#define bFM3_GPIO_EPFR08_SIN5S1                *((volatile unsigned int*)(0x4266C42CUL))
#define bFM3_GPIO_EPFR08_SOT5B0                *((volatile unsigned int*)(0x4266C430UL))
#define bFM3_GPIO_EPFR08_SOT5B1                *((volatile unsigned int*)(0x4266C434UL))
#define bFM3_GPIO_EPFR08_SCK5B0                *((volatile unsigned int*)(0x4266C438UL))
#define bFM3_GPIO_EPFR08_SCK5B1                *((volatile unsigned int*)(0x4266C43CUL))
#define bFM3_GPIO_EPFR08_SIN6S0                *((volatile unsigned int*)(0x4266C440UL))
#define bFM3_GPIO_EPFR08_SIN6S1                *((volatile unsigned int*)(0x4266C444UL))
#define bFM3_GPIO_EPFR08_SOT6B0                *((volatile unsigned int*)(0x4266C448UL))
#define bFM3_GPIO_EPFR08_SOT6B1                *((volatile unsigned int*)(0x4266C44CUL))
#define bFM3_GPIO_EPFR08_SCK6B0                *((volatile unsigned int*)(0x4266C450UL))
#define bFM3_GPIO_EPFR08_SCK6B1                *((volatile unsigned int*)(0x4266C454UL))
#define bFM3_GPIO_EPFR08_SIN7S0                *((volatile unsigned int*)(0x4266C458UL))
#define bFM3_GPIO_EPFR08_SIN7S1                *((volatile unsigned int*)(0x4266C45CUL))
#define bFM3_GPIO_EPFR08_SOT7B0                *((volatile unsigned int*)(0x4266C460UL))
#define bFM3_GPIO_EPFR08_SOT7B1                *((volatile unsigned int*)(0x4266C464UL))
#define bFM3_GPIO_EPFR08_SCK7B0                *((volatile unsigned int*)(0x4266C468UL))
#define bFM3_GPIO_EPFR08_SCK7B1                *((volatile unsigned int*)(0x4266C46CUL))
#define bFM3_GPIO_EPFR09_QAIN0S0               *((volatile unsigned int*)(0x4266C480UL))
#define bFM3_GPIO_EPFR09_QAIN0S1               *((volatile unsigned int*)(0x4266C484UL))
#define bFM3_GPIO_EPFR09_QBIN0S0               *((volatile unsigned int*)(0x4266C488UL))
#define bFM3_GPIO_EPFR09_QBIN0S1               *((volatile unsigned int*)(0x4266C48CUL))
#define bFM3_GPIO_EPFR09_QZIN0S0               *((volatile unsigned int*)(0x4266C490UL))
#define bFM3_GPIO_EPFR09_QZIN0S1               *((volatile unsigned int*)(0x4266C494UL))
#define bFM3_GPIO_EPFR09_QAIN1S0               *((volatile unsigned int*)(0x4266C498UL))
#define bFM3_GPIO_EPFR09_QAIN1S1               *((volatile unsigned int*)(0x4266C49CUL))
#define bFM3_GPIO_EPFR09_QBIN1S0               *((volatile unsigned int*)(0x4266C4A0UL))
#define bFM3_GPIO_EPFR09_QBIN1S1               *((volatile unsigned int*)(0x4266C4A4UL))
#define bFM3_GPIO_EPFR09_QZIN1S0               *((volatile unsigned int*)(0x4266C4A8UL))
#define bFM3_GPIO_EPFR09_QZIN1S1               *((volatile unsigned int*)(0x4266C4ACUL))
#define bFM3_GPIO_EPFR09_ADTRG0S0              *((volatile unsigned int*)(0x4266C4B0UL))
#define bFM3_GPIO_EPFR09_ADTRG0S1              *((volatile unsigned int*)(0x4266C4B4UL))
#define bFM3_GPIO_EPFR09_ADTRG0S2              *((volatile unsigned int*)(0x4266C4B8UL))
#define bFM3_GPIO_EPFR09_ADTRG0S3              *((volatile unsigned int*)(0x4266C4BCUL))
#define bFM3_GPIO_EPFR09_ADTRG1S0              *((volatile unsigned int*)(0x4266C4C0UL))
#define bFM3_GPIO_EPFR09_ADTRG1S1              *((volatile unsigned int*)(0x4266C4C4UL))
#define bFM3_GPIO_EPFR09_ADTRG1S2              *((volatile unsigned int*)(0x4266C4C8UL))
#define bFM3_GPIO_EPFR09_ADTRG1S3              *((volatile unsigned int*)(0x4266C4CCUL))
#define bFM3_GPIO_EPFR09_ADTRG2S0              *((volatile unsigned int*)(0x4266C4D0UL))
#define bFM3_GPIO_EPFR09_ADTRG2S1              *((volatile unsigned int*)(0x4266C4D4UL))
#define bFM3_GPIO_EPFR09_ADTRG2S2              *((volatile unsigned int*)(0x4266C4D8UL))
#define bFM3_GPIO_EPFR09_ADTRG2S3              *((volatile unsigned int*)(0x4266C4DCUL))
#define bFM3_GPIO_EPFR10_UEDEFB                *((volatile unsigned int*)(0x4266C500UL))
#define bFM3_GPIO_EPFR10_UEDTHB                *((volatile unsigned int*)(0x4266C504UL))
#define bFM3_GPIO_EPFR10_UECLKE                *((volatile unsigned int*)(0x4266C508UL))
#define bFM3_GPIO_EPFR10_UEWEXE                *((volatile unsigned int*)(0x4266C50CUL))
#define bFM3_GPIO_EPFR10_UEDQME                *((volatile unsigned int*)(0x4266C510UL))
#define bFM3_GPIO_EPFR10_UEOEXE                *((volatile unsigned int*)(0x4266C514UL))
#define bFM3_GPIO_EPFR10_UEFLSE                *((volatile unsigned int*)(0x4266C518UL))
#define bFM3_GPIO_EPFR10_UECS1E                *((volatile unsigned int*)(0x4266C51CUL))
#define bFM3_GPIO_EPFR10_UECS2E                *((volatile unsigned int*)(0x4266C520UL))
#define bFM3_GPIO_EPFR10_UECS3E                *((volatile unsigned int*)(0x4266C524UL))
#define bFM3_GPIO_EPFR10_UECS4E                *((volatile unsigned int*)(0x4266C528UL))
#define bFM3_GPIO_EPFR10_UECS5E                *((volatile unsigned int*)(0x4266C52CUL))
#define bFM3_GPIO_EPFR10_UECS6E                *((volatile unsigned int*)(0x4266C530UL))
#define bFM3_GPIO_EPFR10_UECS7E                *((volatile unsigned int*)(0x4266C534UL))
#define bFM3_GPIO_EPFR10_UEAOOE                *((volatile unsigned int*)(0x4266C538UL))
#define bFM3_GPIO_EPFR10_UEA08E                *((volatile unsigned int*)(0x4266C53CUL))
#define bFM3_GPIO_EPFR10_UEA09E                *((volatile unsigned int*)(0x4266C540UL))
#define bFM3_GPIO_EPFR10_UEA10E                *((volatile unsigned int*)(0x4266C544UL))
#define bFM3_GPIO_EPFR10_UEA11E                *((volatile unsigned int*)(0x4266C548UL))
#define bFM3_GPIO_EPFR10_UEA12E                *((volatile unsigned int*)(0x4266C54CUL))
#define bFM3_GPIO_EPFR10_UEA13E                *((volatile unsigned int*)(0x4266C550UL))
#define bFM3_GPIO_EPFR10_UEA14E                *((volatile unsigned int*)(0x4266C554UL))
#define bFM3_GPIO_EPFR10_UEA15E                *((volatile unsigned int*)(0x4266C558UL))
#define bFM3_GPIO_EPFR10_UEA16E                *((volatile unsigned int*)(0x4266C55CUL))
#define bFM3_GPIO_EPFR10_UEA17E                *((volatile unsigned int*)(0x4266C560UL))
#define bFM3_GPIO_EPFR10_UEA18E                *((volatile unsigned int*)(0x4266C564UL))
#define bFM3_GPIO_EPFR10_UEA19E                *((volatile unsigned int*)(0x4266C568UL))
#define bFM3_GPIO_EPFR10_UEA20E                *((volatile unsigned int*)(0x4266C56CUL))
#define bFM3_GPIO_EPFR10_UEA21E                *((volatile unsigned int*)(0x4266C570UL))
#define bFM3_GPIO_EPFR10_UEA22E                *((volatile unsigned int*)(0x4266C574UL))
#define bFM3_GPIO_EPFR10_UEA23E                *((volatile unsigned int*)(0x4266C578UL))
#define bFM3_GPIO_EPFR10_UEA24E                *((volatile unsigned int*)(0x4266C57CUL))
#define bFM3_GPIO_EPFR11_UEALEE                *((volatile unsigned int*)(0x4266C580UL))
#define bFM3_GPIO_EPFR11_UECS0E                *((volatile unsigned int*)(0x4266C584UL))
#define bFM3_GPIO_EPFR11_UEA01E                *((volatile unsigned int*)(0x4266C588UL))
#define bFM3_GPIO_EPFR11_UEA02E                *((volatile unsigned int*)(0x4266C58CUL))
#define bFM3_GPIO_EPFR11_UEA03E                *((volatile unsigned int*)(0x4266C590UL))
#define bFM3_GPIO_EPFR11_UEA04E                *((volatile unsigned int*)(0x4266C594UL))
#define bFM3_GPIO_EPFR11_UEA05E                *((volatile unsigned int*)(0x4266C598UL))
#define bFM3_GPIO_EPFR11_UEA06E                *((volatile unsigned int*)(0x4266C59CUL))
#define bFM3_GPIO_EPFR11_UEA07E                *((volatile unsigned int*)(0x4266C5A0UL))
#define bFM3_GPIO_EPFR11_UED00B                *((volatile unsigned int*)(0x4266C5A4UL))
#define bFM3_GPIO_EPFR11_UED01B                *((volatile unsigned int*)(0x4266C5A8UL))
#define bFM3_GPIO_EPFR11_UED02B                *((volatile unsigned int*)(0x4266C5ACUL))
#define bFM3_GPIO_EPFR11_UED03B                *((volatile unsigned int*)(0x4266C5B0UL))
#define bFM3_GPIO_EPFR11_UED04B                *((volatile unsigned int*)(0x4266C5B4UL))
#define bFM3_GPIO_EPFR11_UED05B                *((volatile unsigned int*)(0x4266C5B8UL))
#define bFM3_GPIO_EPFR11_UED06B                *((volatile unsigned int*)(0x4266C5BCUL))
#define bFM3_GPIO_EPFR11_UED07B                *((volatile unsigned int*)(0x4266C5C0UL))
#define bFM3_GPIO_EPFR11_UED08B                *((volatile unsigned int*)(0x4266C5C4UL))
#define bFM3_GPIO_EPFR11_UED09B                *((volatile unsigned int*)(0x4266C5C8UL))
#define bFM3_GPIO_EPFR11_UED10B                *((volatile unsigned int*)(0x4266C5CCUL))
#define bFM3_GPIO_EPFR11_UED11B                *((volatile unsigned int*)(0x4266C5D0UL))
#define bFM3_GPIO_EPFR11_UED12B                *((volatile unsigned int*)(0x4266C5D4UL))
#define bFM3_GPIO_EPFR11_UED13B                *((volatile unsigned int*)(0x4266C5D8UL))
#define bFM3_GPIO_EPFR11_UED14B                *((volatile unsigned int*)(0x4266C5DCUL))
#define bFM3_GPIO_EPFR11_UED15B                *((volatile unsigned int*)(0x4266C5E0UL))
#define bFM3_GPIO_EPFR11_UERLC                 *((volatile unsigned int*)(0x4266C5E4UL))
#define bFM3_GPIO_EPFR12_TIOA8E0               *((volatile unsigned int*)(0x4266C608UL))
#define bFM3_GPIO_EPFR12_TIOA8E1               *((volatile unsigned int*)(0x4266C60CUL))
#define bFM3_GPIO_EPFR12_TIOB8S0               *((volatile unsigned int*)(0x4266C610UL))
#define bFM3_GPIO_EPFR12_TIOB8S1               *((volatile unsigned int*)(0x4266C614UL))
#define bFM3_GPIO_EPFR12_TIOA9S0               *((volatile unsigned int*)(0x4266C620UL))
#define bFM3_GPIO_EPFR12_TIOA9S1               *((volatile unsigned int*)(0x4266C624UL))
#define bFM3_GPIO_EPFR12_TIOA9E0               *((volatile unsigned int*)(0x4266C628UL))
#define bFM3_GPIO_EPFR12_TIOA9E1               *((volatile unsigned int*)(0x4266C62CUL))
#define bFM3_GPIO_EPFR12_TIOB9S0               *((volatile unsigned int*)(0x4266C630UL))
#define bFM3_GPIO_EPFR12_TIOB9S1               *((volatile unsigned int*)(0x4266C634UL))
#define bFM3_GPIO_EPFR12_TIOA10E0              *((volatile unsigned int*)(0x4266C648UL))
#define bFM3_GPIO_EPFR12_TIOA10E1              *((volatile unsigned int*)(0x4266C64CUL))
#define bFM3_GPIO_EPFR12_TIOB10S0              *((volatile unsigned int*)(0x4266C650UL))
#define bFM3_GPIO_EPFR12_TIOB10S1              *((volatile unsigned int*)(0x4266C654UL))
#define bFM3_GPIO_EPFR12_TIOA11S0              *((volatile unsigned int*)(0x4266C660UL))
#define bFM3_GPIO_EPFR12_TIOA11S1              *((volatile unsigned int*)(0x4266C664UL))
#define bFM3_GPIO_EPFR12_TIOA11E0              *((volatile unsigned int*)(0x4266C668UL))
#define bFM3_GPIO_EPFR12_TIOA11E1              *((volatile unsigned int*)(0x4266C66CUL))
#define bFM3_GPIO_EPFR12_TIOB11S0              *((volatile unsigned int*)(0x4266C670UL))
#define bFM3_GPIO_EPFR12_TIOB11S1              *((volatile unsigned int*)(0x4266C674UL))
#define bFM3_GPIO_EPFR13_TIOA12E0              *((volatile unsigned int*)(0x4266C688UL))
#define bFM3_GPIO_EPFR13_TIOA12E1              *((volatile unsigned int*)(0x4266C68CUL))
#define bFM3_GPIO_EPFR13_TIOB12S0              *((volatile unsigned int*)(0x4266C690UL))
#define bFM3_GPIO_EPFR13_TIOB12S1              *((volatile unsigned int*)(0x4266C694UL))
#define bFM3_GPIO_EPFR13_TIOA13S0              *((volatile unsigned int*)(0x4266C6A0UL))
#define bFM3_GPIO_EPFR13_TIOA13S1              *((volatile unsigned int*)(0x4266C6A4UL))
#define bFM3_GPIO_EPFR13_TIOA13E0              *((volatile unsigned int*)(0x4266C6A8UL))
#define bFM3_GPIO_EPFR13_TIOA13E1              *((volatile unsigned int*)(0x4266C6ACUL))
#define bFM3_GPIO_EPFR13_TIOB13S0              *((volatile unsigned int*)(0x4266C6B0UL))
#define bFM3_GPIO_EPFR13_TIOB13S1              *((volatile unsigned int*)(0x4266C6B4UL))
#define bFM3_GPIO_EPFR13_TIOA14E0              *((volatile unsigned int*)(0x4266C6C8UL))
#define bFM3_GPIO_EPFR13_TIOA14E1              *((volatile unsigned int*)(0x4266C6CCUL))
#define bFM3_GPIO_EPFR13_TIOB14S0              *((volatile unsigned int*)(0x4266C6D0UL))
#define bFM3_GPIO_EPFR13_TIOB14S1              *((volatile unsigned int*)(0x4266C6D4UL))
#define bFM3_GPIO_EPFR13_TIOA15S0              *((volatile unsigned int*)(0x4266C6E0UL))
#define bFM3_GPIO_EPFR13_TIOA15S1              *((volatile unsigned int*)(0x4266C6E4UL))
#define bFM3_GPIO_EPFR13_TIOA15E0              *((volatile unsigned int*)(0x4266C6E8UL))
#define bFM3_GPIO_EPFR13_TIOA15E1              *((volatile unsigned int*)(0x4266C6ECUL))
#define bFM3_GPIO_EPFR13_TIOB15S0              *((volatile unsigned int*)(0x4266C6F0UL))
#define bFM3_GPIO_EPFR13_TIOB15S1              *((volatile unsigned int*)(0x4266C6F4UL))
#define bFM3_GPIO_EPFR14_QAIN2S0               *((volatile unsigned int*)(0x4266C700UL))
#define bFM3_GPIO_EPFR14_QAIN2S1               *((volatile unsigned int*)(0x4266C704UL))
#define bFM3_GPIO_EPFR14_QBIN2S0               *((volatile unsigned int*)(0x4266C708UL))
#define bFM3_GPIO_EPFR14_QBIN2S1               *((volatile unsigned int*)(0x4266C70CUL))
#define bFM3_GPIO_EPFR14_QZIN2S0               *((volatile unsigned int*)(0x4266C710UL))
#define bFM3_GPIO_EPFR14_QZIN2S1               *((volatile unsigned int*)(0x4266C714UL))
#define bFM3_GPIO_EPFR14_E_TD0E                *((volatile unsigned int*)(0x4266C748UL))
#define bFM3_GPIO_EPFR14_E_TD1E                *((volatile unsigned int*)(0x4266C74CUL))
#define bFM3_GPIO_EPFR14_E_TE0E                *((volatile unsigned int*)(0x4266C750UL))
#define bFM3_GPIO_EPFR14_E_TE1E                *((volatile unsigned int*)(0x4266C754UL))
#define bFM3_GPIO_EPFR14_E_MC0E                *((volatile unsigned int*)(0x4266C758UL))
#define bFM3_GPIO_EPFR14_E_MC1B                *((volatile unsigned int*)(0x4266C75CUL))
#define bFM3_GPIO_EPFR14_E_MD0B                *((volatile unsigned int*)(0x4266C760UL))
#define bFM3_GPIO_EPFR14_E_MD1B                *((volatile unsigned int*)(0x4266C764UL))
#define bFM3_GPIO_EPFR14_E_CKE                 *((volatile unsigned int*)(0x4266C768UL))
#define bFM3_GPIO_EPFR14_E_PSE                 *((volatile unsigned int*)(0x4266C76CUL))
#define bFM3_GPIO_EPFR14_E_SPLC0               *((volatile unsigned int*)(0x4266C770UL))
#define bFM3_GPIO_EPFR14_E_SPLC1               *((volatile unsigned int*)(0x4266C774UL))
#define bFM3_GPIO_EPFR15_EINT16S0              *((volatile unsigned int*)(0x4266C780UL))
#define bFM3_GPIO_EPFR15_EINT16S1              *((volatile unsigned int*)(0x4266C784UL))
#define bFM3_GPIO_EPFR15_EINT17S0              *((volatile unsigned int*)(0x4266C788UL))
#define bFM3_GPIO_EPFR15_EINT17S1              *((volatile unsigned int*)(0x4266C78CUL))
#define bFM3_GPIO_EPFR15_EINT18S0              *((volatile unsigned int*)(0x4266C790UL))
#define bFM3_GPIO_EPFR15_EINT18S1              *((volatile unsigned int*)(0x4266C794UL))
#define bFM3_GPIO_EPFR15_EINT19S0              *((volatile unsigned int*)(0x4266C798UL))
#define bFM3_GPIO_EPFR15_EINT19S1              *((volatile unsigned int*)(0x4266C79CUL))
#define bFM3_GPIO_EPFR15_EINT20S0              *((volatile unsigned int*)(0x4266C7A0UL))
#define bFM3_GPIO_EPFR15_EINT20S1              *((volatile unsigned int*)(0x4266C7A4UL))
#define bFM3_GPIO_EPFR15_EINT21S0              *((volatile unsigned int*)(0x4266C7A8UL))
#define bFM3_GPIO_EPFR15_EINT21S1              *((volatile unsigned int*)(0x4266C7ACUL))
#define bFM3_GPIO_EPFR15_EINT22S0              *((volatile unsigned int*)(0x4266C7B0UL))
#define bFM3_GPIO_EPFR15_EINT22S1              *((volatile unsigned int*)(0x4266C7B4UL))
#define bFM3_GPIO_EPFR15_EINT23S0              *((volatile unsigned int*)(0x4266C7B8UL))
#define bFM3_GPIO_EPFR15_EINT23S1              *((volatile unsigned int*)(0x4266C7BCUL))
#define bFM3_GPIO_EPFR15_EINT24S0              *((volatile unsigned int*)(0x4266C7C0UL))
#define bFM3_GPIO_EPFR15_EINT24S1              *((volatile unsigned int*)(0x4266C7C4UL))
#define bFM3_GPIO_EPFR15_EINT25S0              *((volatile unsigned int*)(0x4266C7C8UL))
#define bFM3_GPIO_EPFR15_EINT25S1              *((volatile unsigned int*)(0x4266C7CCUL))
#define bFM3_GPIO_EPFR15_EINT26S0              *((volatile unsigned int*)(0x4266C7D0UL))
#define bFM3_GPIO_EPFR15_EINT26S1              *((volatile unsigned int*)(0x4266C7D4UL))
#define bFM3_GPIO_EPFR15_EINT27S0              *((volatile unsigned int*)(0x4266C7D8UL))
#define bFM3_GPIO_EPFR15_EINT27S1              *((volatile unsigned int*)(0x4266C7DCUL))
#define bFM3_GPIO_EPFR15_EINT28S0              *((volatile unsigned int*)(0x4266C7E0UL))
#define bFM3_GPIO_EPFR15_EINT28S1              *((volatile unsigned int*)(0x4266C7E4UL))
#define bFM3_GPIO_EPFR15_EINT29S0              *((volatile unsigned int*)(0x4266C7E8UL))
#define bFM3_GPIO_EPFR15_EINT29S1              *((volatile unsigned int*)(0x4266C7ECUL))
#define bFM3_GPIO_EPFR15_EINT30S0              *((volatile unsigned int*)(0x4266C7F0UL))
#define bFM3_GPIO_EPFR15_EINT30S1              *((volatile unsigned int*)(0x4266C7F4UL))
#define bFM3_GPIO_EPFR15_EINT31S0              *((volatile unsigned int*)(0x4266C7F8UL))
#define bFM3_GPIO_EPFR15_EINT31S1              *((volatile unsigned int*)(0x4266C7FCUL))
#define bFM3_GPIO_PZR0_P0                      *((volatile unsigned int*)(0x4266E000UL))
#define bFM3_GPIO_PZR0_P1                      *((volatile unsigned int*)(0x4266E004UL))
#define bFM3_GPIO_PZR0_P2                      *((volatile unsigned int*)(0x4266E008UL))
#define bFM3_GPIO_PZR0_P3                      *((volatile unsigned int*)(0x4266E00CUL))
#define bFM3_GPIO_PZR0_P4                      *((volatile unsigned int*)(0x4266E010UL))
#define bFM3_GPIO_PZR0_P5                      *((volatile unsigned int*)(0x4266E014UL))
#define bFM3_GPIO_PZR0_P6                      *((volatile unsigned int*)(0x4266E018UL))
#define bFM3_GPIO_PZR0_P7                      *((volatile unsigned int*)(0x4266E01CUL))
#define bFM3_GPIO_PZR0_P8                      *((volatile unsigned int*)(0x4266E020UL))
#define bFM3_GPIO_PZR0_P9                      *((volatile unsigned int*)(0x4266E024UL))
#define bFM3_GPIO_PZR1_P0                      *((volatile unsigned int*)(0x4266E080UL))
#define bFM3_GPIO_PZR1_P1                      *((volatile unsigned int*)(0x4266E084UL))
#define bFM3_GPIO_PZR1_P2                      *((volatile unsigned int*)(0x4266E088UL))
#define bFM3_GPIO_PZR1_P3                      *((volatile unsigned int*)(0x4266E08CUL))
#define bFM3_GPIO_PZR1_P4                      *((volatile unsigned int*)(0x4266E090UL))
#define bFM3_GPIO_PZR1_P5                      *((volatile unsigned int*)(0x4266E094UL))
#define bFM3_GPIO_PZR1_P6                      *((volatile unsigned int*)(0x4266E098UL))
#define bFM3_GPIO_PZR1_P7                      *((volatile unsigned int*)(0x4266E09CUL))
#define bFM3_GPIO_PZR1_P8                      *((volatile unsigned int*)(0x4266E0A0UL))
#define bFM3_GPIO_PZR1_P9                      *((volatile unsigned int*)(0x4266E0A4UL))
#define bFM3_GPIO_PZR1_PA                      *((volatile unsigned int*)(0x4266E0A8UL))
#define bFM3_GPIO_PZR1_PB                      *((volatile unsigned int*)(0x4266E0ACUL))
#define bFM3_GPIO_PZR1_PC                      *((volatile unsigned int*)(0x4266E0B0UL))
#define bFM3_GPIO_PZR1_PD                      *((volatile unsigned int*)(0x4266E0B4UL))
#define bFM3_GPIO_PZR1_PE                      *((volatile unsigned int*)(0x4266E0B8UL))
#define bFM3_GPIO_PZR1_PF                      *((volatile unsigned int*)(0x4266E0BCUL))
#define bFM3_GPIO_PZR2_P0                      *((volatile unsigned int*)(0x4266E100UL))
#define bFM3_GPIO_PZR2_P1                      *((volatile unsigned int*)(0x4266E104UL))
#define bFM3_GPIO_PZR2_P2                      *((volatile unsigned int*)(0x4266E108UL))
#define bFM3_GPIO_PZR2_P3                      *((volatile unsigned int*)(0x4266E10CUL))
#define bFM3_GPIO_PZR2_P4                      *((volatile unsigned int*)(0x4266E110UL))
#define bFM3_GPIO_PZR2_P5                      *((volatile unsigned int*)(0x4266E114UL))
#define bFM3_GPIO_PZR2_P6                      *((volatile unsigned int*)(0x4266E118UL))
#define bFM3_GPIO_PZR2_P7                      *((volatile unsigned int*)(0x4266E11CUL))
#define bFM3_GPIO_PZR2_P8                      *((volatile unsigned int*)(0x4266E120UL))
#define bFM3_GPIO_PZR2_P9                      *((volatile unsigned int*)(0x4266E124UL))
#define bFM3_GPIO_PZR3_P0                      *((volatile unsigned int*)(0x4266E180UL))
#define bFM3_GPIO_PZR3_P1                      *((volatile unsigned int*)(0x4266E184UL))
#define bFM3_GPIO_PZR3_P2                      *((volatile unsigned int*)(0x4266E188UL))
#define bFM3_GPIO_PZR3_P3                      *((volatile unsigned int*)(0x4266E18CUL))
#define bFM3_GPIO_PZR3_P4                      *((volatile unsigned int*)(0x4266E190UL))
#define bFM3_GPIO_PZR3_P5                      *((volatile unsigned int*)(0x4266E194UL))
#define bFM3_GPIO_PZR3_P6                      *((volatile unsigned int*)(0x4266E198UL))
#define bFM3_GPIO_PZR3_P7                      *((volatile unsigned int*)(0x4266E19CUL))
#define bFM3_GPIO_PZR3_P8                      *((volatile unsigned int*)(0x4266E1A0UL))
#define bFM3_GPIO_PZR3_P9                      *((volatile unsigned int*)(0x4266E1A4UL))
#define bFM3_GPIO_PZR3_PA                      *((volatile unsigned int*)(0x4266E1A8UL))
#define bFM3_GPIO_PZR3_PB                      *((volatile unsigned int*)(0x4266E1ACUL))
#define bFM3_GPIO_PZR3_PC                      *((volatile unsigned int*)(0x4266E1B0UL))
#define bFM3_GPIO_PZR3_PD                      *((volatile unsigned int*)(0x4266E1B4UL))
#define bFM3_GPIO_PZR3_PE                      *((volatile unsigned int*)(0x4266E1B8UL))
#define bFM3_GPIO_PZR3_PF                      *((volatile unsigned int*)(0x4266E1BCUL))
#define bFM3_GPIO_PZR4_P0                      *((volatile unsigned int*)(0x4266E200UL))
#define bFM3_GPIO_PZR4_P1                      *((volatile unsigned int*)(0x4266E204UL))
#define bFM3_GPIO_PZR4_P2                      *((volatile unsigned int*)(0x4266E208UL))
#define bFM3_GPIO_PZR4_P3                      *((volatile unsigned int*)(0x4266E20CUL))
#define bFM3_GPIO_PZR4_P4                      *((volatile unsigned int*)(0x4266E210UL))
#define bFM3_GPIO_PZR4_P5                      *((volatile unsigned int*)(0x4266E214UL))
#define bFM3_GPIO_PZR4_P6                      *((volatile unsigned int*)(0x4266E218UL))
#define bFM3_GPIO_PZR4_P7                      *((volatile unsigned int*)(0x4266E21CUL))
#define bFM3_GPIO_PZR4_P8                      *((volatile unsigned int*)(0x4266E220UL))
#define bFM3_GPIO_PZR4_P9                      *((volatile unsigned int*)(0x4266E224UL))
#define bFM3_GPIO_PZR4_PA                      *((volatile unsigned int*)(0x4266E228UL))
#define bFM3_GPIO_PZR4_PB                      *((volatile unsigned int*)(0x4266E22CUL))
#define bFM3_GPIO_PZR4_PC                      *((volatile unsigned int*)(0x4266E230UL))
#define bFM3_GPIO_PZR4_PD                      *((volatile unsigned int*)(0x4266E234UL))
#define bFM3_GPIO_PZR4_PE                      *((volatile unsigned int*)(0x4266E238UL))
#define bFM3_GPIO_PZR5_P0                      *((volatile unsigned int*)(0x4266E280UL))
#define bFM3_GPIO_PZR5_P1                      *((volatile unsigned int*)(0x4266E284UL))
#define bFM3_GPIO_PZR5_P2                      *((volatile unsigned int*)(0x4266E288UL))
#define bFM3_GPIO_PZR5_P3                      *((volatile unsigned int*)(0x4266E28CUL))
#define bFM3_GPIO_PZR5_P4                      *((volatile unsigned int*)(0x4266E290UL))
#define bFM3_GPIO_PZR5_P5                      *((volatile unsigned int*)(0x4266E294UL))
#define bFM3_GPIO_PZR5_P6                      *((volatile unsigned int*)(0x4266E298UL))
#define bFM3_GPIO_PZR5_P7                      *((volatile unsigned int*)(0x4266E29CUL))
#define bFM3_GPIO_PZR5_P8                      *((volatile unsigned int*)(0x4266E2A0UL))
#define bFM3_GPIO_PZR5_P9                      *((volatile unsigned int*)(0x4266E2A4UL))
#define bFM3_GPIO_PZR5_PA                      *((volatile unsigned int*)(0x4266E2A8UL))
#define bFM3_GPIO_PZR5_PB                      *((volatile unsigned int*)(0x4266E2ACUL))
#define bFM3_GPIO_PZR5_PC                      *((volatile unsigned int*)(0x4266E2B0UL))
#define bFM3_GPIO_PZR5_PD                      *((volatile unsigned int*)(0x4266E2B4UL))
#define bFM3_GPIO_PZR6_P0                      *((volatile unsigned int*)(0x4266E300UL))
#define bFM3_GPIO_PZR6_P1                      *((volatile unsigned int*)(0x4266E304UL))
#define bFM3_GPIO_PZR6_P2                      *((volatile unsigned int*)(0x4266E308UL))
#define bFM3_GPIO_PZR7_P0                      *((volatile unsigned int*)(0x4266E380UL))
#define bFM3_GPIO_PZR7_P1                      *((volatile unsigned int*)(0x4266E384UL))
#define bFM3_GPIO_PZR7_P2                      *((volatile unsigned int*)(0x4266E388UL))
#define bFM3_GPIO_PZR7_P3                      *((volatile unsigned int*)(0x4266E38CUL))
#define bFM3_GPIO_PZR7_P4                      *((volatile unsigned int*)(0x4266E390UL))
#define bFM3_GPIO_PZR7_P5                      *((volatile unsigned int*)(0x4266E394UL))
#define bFM3_GPIO_PZR7_P6                      *((volatile unsigned int*)(0x4266E398UL))
#define bFM3_GPIO_PZR7_P7                      *((volatile unsigned int*)(0x4266E39CUL))
#define bFM3_GPIO_PZR7_P8                      *((volatile unsigned int*)(0x4266E3A0UL))
#define bFM3_GPIO_PZR7_P9                      *((volatile unsigned int*)(0x4266E3A4UL))
#define bFM3_GPIO_PZR7_PA                      *((volatile unsigned int*)(0x4266E3A8UL))
#define bFM3_GPIO_PZR7_PB                      *((volatile unsigned int*)(0x4266E3ACUL))
#define bFM3_GPIO_PZR7_PC                      *((volatile unsigned int*)(0x4266E3B0UL))
#define bFM3_GPIO_PZR7_PD                      *((volatile unsigned int*)(0x4266E3B4UL))
#define bFM3_GPIO_PZR7_PE                      *((volatile unsigned int*)(0x4266E3B8UL))
#define bFM3_GPIO_PZR7_PF                      *((volatile unsigned int*)(0x4266E3BCUL))
#define bFM3_GPIO_PZR8_P0                      *((volatile unsigned int*)(0x4266E400UL))
#define bFM3_GPIO_PZR8_P1                      *((volatile unsigned int*)(0x4266E404UL))
#define bFM3_GPIO_PZR8_P2                      *((volatile unsigned int*)(0x4266E408UL))
#define bFM3_GPIO_PZR8_P3                      *((volatile unsigned int*)(0x4266E40CUL))
#define bFM3_GPIO_PZR9_P0                      *((volatile unsigned int*)(0x4266E480UL))
#define bFM3_GPIO_PZR9_P1                      *((volatile unsigned int*)(0x4266E484UL))
#define bFM3_GPIO_PZR9_P2                      *((volatile unsigned int*)(0x4266E488UL))
#define bFM3_GPIO_PZR9_P3                      *((volatile unsigned int*)(0x4266E48CUL))
#define bFM3_GPIO_PZR9_P4                      *((volatile unsigned int*)(0x4266E490UL))
#define bFM3_GPIO_PZR9_P5                      *((volatile unsigned int*)(0x4266E494UL))
#define bFM3_GPIO_PZRA_P0                      *((volatile unsigned int*)(0x4266E500UL))
#define bFM3_GPIO_PZRA_P1                      *((volatile unsigned int*)(0x4266E504UL))
#define bFM3_GPIO_PZRA_P2                      *((volatile unsigned int*)(0x4266E508UL))
#define bFM3_GPIO_PZRA_P3                      *((volatile unsigned int*)(0x4266E50CUL))
#define bFM3_GPIO_PZRA_P4                      *((volatile unsigned int*)(0x4266E510UL))
#define bFM3_GPIO_PZRA_P5                      *((volatile unsigned int*)(0x4266E514UL))
#define bFM3_GPIO_PZRB_P0                      *((volatile unsigned int*)(0x4266E580UL))
#define bFM3_GPIO_PZRB_P1                      *((volatile unsigned int*)(0x4266E584UL))
#define bFM3_GPIO_PZRB_P2                      *((volatile unsigned int*)(0x4266E588UL))
#define bFM3_GPIO_PZRB_P3                      *((volatile unsigned int*)(0x4266E58CUL))
#define bFM3_GPIO_PZRB_P4                      *((volatile unsigned int*)(0x4266E590UL))
#define bFM3_GPIO_PZRB_P5                      *((volatile unsigned int*)(0x4266E594UL))
#define bFM3_GPIO_PZRB_P6                      *((volatile unsigned int*)(0x4266E598UL))
#define bFM3_GPIO_PZRB_P7                      *((volatile unsigned int*)(0x4266E59CUL))
#define bFM3_GPIO_PZRC_P0                      *((volatile unsigned int*)(0x4266E600UL))
#define bFM3_GPIO_PZRC_P1                      *((volatile unsigned int*)(0x4266E604UL))
#define bFM3_GPIO_PZRC_P2                      *((volatile unsigned int*)(0x4266E608UL))
#define bFM3_GPIO_PZRC_P3                      *((volatile unsigned int*)(0x4266E60CUL))
#define bFM3_GPIO_PZRC_P4                      *((volatile unsigned int*)(0x4266E610UL))
#define bFM3_GPIO_PZRC_P5                      *((volatile unsigned int*)(0x4266E614UL))
#define bFM3_GPIO_PZRC_P6                      *((volatile unsigned int*)(0x4266E618UL))
#define bFM3_GPIO_PZRC_P7                      *((volatile unsigned int*)(0x4266E61CUL))
#define bFM3_GPIO_PZRC_P8                      *((volatile unsigned int*)(0x4266E620UL))
#define bFM3_GPIO_PZRC_P9                      *((volatile unsigned int*)(0x4266E624UL))
#define bFM3_GPIO_PZRC_PA                      *((volatile unsigned int*)(0x4266E628UL))
#define bFM3_GPIO_PZRC_PB                      *((volatile unsigned int*)(0x4266E62CUL))
#define bFM3_GPIO_PZRC_PC                      *((volatile unsigned int*)(0x4266E630UL))
#define bFM3_GPIO_PZRC_PD                      *((volatile unsigned int*)(0x4266E634UL))
#define bFM3_GPIO_PZRC_PE                      *((volatile unsigned int*)(0x4266E638UL))
#define bFM3_GPIO_PZRC_PF                      *((volatile unsigned int*)(0x4266E63CUL))
#define bFM3_GPIO_PZRD_P0                      *((volatile unsigned int*)(0x4266E680UL))
#define bFM3_GPIO_PZRD_P1                      *((volatile unsigned int*)(0x4266E684UL))
#define bFM3_GPIO_PZRD_P2                      *((volatile unsigned int*)(0x4266E688UL))
#define bFM3_GPIO_PZRD_P3                      *((volatile unsigned int*)(0x4266E68CUL))
#define bFM3_GPIO_PZRE_P0                      *((volatile unsigned int*)(0x4266E700UL))
#define bFM3_GPIO_PZRE_P2                      *((volatile unsigned int*)(0x4266E708UL))
#define bFM3_GPIO_PZRE_P3                      *((volatile unsigned int*)(0x4266E70CUL))
#define bFM3_GPIO_PZRF_P0                      *((volatile unsigned int*)(0x4266E780UL))
#define bFM3_GPIO_PZRF_P1                      *((volatile unsigned int*)(0x4266E784UL))
#define bFM3_GPIO_PZRF_P2                      *((volatile unsigned int*)(0x4266E788UL))
#define bFM3_GPIO_PZRF_P3                      *((volatile unsigned int*)(0x4266E78CUL))
#define bFM3_GPIO_PZRF_P4                      *((volatile unsigned int*)(0x4266E790UL))
#define bFM3_GPIO_PZRF_P5                      *((volatile unsigned int*)(0x4266E794UL))
#define bFM3_GPIO_PZRF_P6                      *((volatile unsigned int*)(0x4266E798UL))
