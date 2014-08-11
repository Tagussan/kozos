
main.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <start_threads>:
   0:	b580      	push	{r7, lr}
   2:	b084      	sub	sp, #16
   4:	af02      	add	r7, sp, #8
   6:	6078      	str	r0, [r7, #4]
   8:	6039      	str	r1, [r7, #0]
   a:	f240 0300 	movw	r3, #0
   e:	f2c0 0300 	movt	r3, #0
  12:	681b      	ldr	r3, [r3, #0]
  14:	2b00      	cmp	r3, #0
  16:	d002      	beq.n	1e <start_threads+0x1e>
  18:	f04f 0300 	mov.w	r3, #0
  1c:	e039      	b.n	76 <start_threads+0x76>
  1e:	f240 0300 	movw	r3, #0
  22:	f2c0 0300 	movt	r3, #0
  26:	681b      	ldr	r3, [r3, #0]
  28:	f103 0201 	add.w	r2, r3, #1
  2c:	f240 0300 	movw	r3, #0
  30:	f2c0 0300 	movt	r3, #0
  34:	601a      	str	r2, [r3, #0]
  36:	f04f 0300 	mov.w	r3, #0
  3a:	9300      	str	r3, [sp, #0]
  3c:	f04f 0300 	mov.w	r3, #0
  40:	9301      	str	r3, [sp, #4]
  42:	f240 0000 	movw	r0, #0
  46:	f2c0 0000 	movt	r0, #0
  4a:	f240 0100 	movw	r1, #0
  4e:	f2c0 0100 	movt	r1, #0
  52:	f04f 0201 	mov.w	r2, #1
  56:	f44f 7380 	mov.w	r3, #256	; 0x100
  5a:	f7ff fffe 	bl	0 <kz_run>
  5e:	f04f 0300 	mov.w	r3, #0
  62:	9300      	str	r3, [sp, #0]
  64:	f04f 0300 	mov.w	r3, #0
  68:	9301      	str	r3, [sp, #4]
  6a:	f240 0000 	movw	r0, #0
  6e:	f2c0 0000 	movt	r0, #0
  72:	f240 0100 	movw	r1, #0
  76:	f2c0 0100 	movt	r1, #0
  7a:	f04f 0208 	mov.w	r2, #8
  7e:	f44f 7380 	mov.w	r3, #256	; 0x100
  82:	f7ff fffe 	bl	0 <kz_run>
  86:	f04f 000f 	mov.w	r0, #15
  8a:	f7ff fffe 	bl	0 <kz_chpri>
  8e:	f04f 0300 	mov.w	r3, #0
  92:	4618      	mov	r0, r3
  94:	f107 0708 	add.w	r7, r7, #8
  98:	46bd      	mov	sp, r7
  9a:	bd80      	pop	{r7, pc}

0000009c <init>:
  9c:	b480      	push	{r7}
  9e:	b083      	sub	sp, #12
  a0:	af00      	add	r7, sp, #0
  a2:	f240 0300 	movw	r3, #0
  a6:	f2c0 0300 	movt	r3, #0
  aa:	60bb      	str	r3, [r7, #8]
  ac:	f240 0300 	movw	r3, #0
  b0:	f2c0 0300 	movt	r3, #0
  b4:	607b      	str	r3, [r7, #4]
  b6:	f240 0200 	movw	r2, #0
  ba:	f2c0 0200 	movt	r2, #0
  be:	f240 0300 	movw	r3, #0
  c2:	f2c0 0300 	movt	r3, #0
  c6:	1ad3      	subs	r3, r2, r3
  c8:	603b      	str	r3, [r7, #0]
  ca:	e00f      	b.n	ec <init+0x50>
  cc:	687b      	ldr	r3, [r7, #4]
  ce:	781a      	ldrb	r2, [r3, #0]
  d0:	68bb      	ldr	r3, [r7, #8]
  d2:	701a      	strb	r2, [r3, #0]
  d4:	68bb      	ldr	r3, [r7, #8]
  d6:	f103 0301 	add.w	r3, r3, #1
  da:	60bb      	str	r3, [r7, #8]
  dc:	687b      	ldr	r3, [r7, #4]
  de:	f103 0301 	add.w	r3, r3, #1
  e2:	607b      	str	r3, [r7, #4]
  e4:	683b      	ldr	r3, [r7, #0]
  e6:	f103 33ff 	add.w	r3, r3, #4294967295	; 0xffffffff
  ea:	603b      	str	r3, [r7, #0]
  ec:	683b      	ldr	r3, [r7, #0]
  ee:	2b00      	cmp	r3, #0
  f0:	dcec      	bgt.n	cc <init+0x30>
  f2:	f240 0300 	movw	r3, #0
  f6:	f2c0 0300 	movt	r3, #0
  fa:	60bb      	str	r3, [r7, #8]
  fc:	f240 0200 	movw	r2, #0
 100:	f2c0 0200 	movt	r2, #0
 104:	f240 0300 	movw	r3, #0
 108:	f2c0 0300 	movt	r3, #0
 10c:	1ad3      	subs	r3, r2, r3
 10e:	603b      	str	r3, [r7, #0]
 110:	e00b      	b.n	12a <init+0x8e>
 112:	68bb      	ldr	r3, [r7, #8]
 114:	f04f 0200 	mov.w	r2, #0
 118:	701a      	strb	r2, [r3, #0]
 11a:	68bb      	ldr	r3, [r7, #8]
 11c:	f103 0301 	add.w	r3, r3, #1
 120:	60bb      	str	r3, [r7, #8]
 122:	683b      	ldr	r3, [r7, #0]
 124:	f103 33ff 	add.w	r3, r3, #4294967295	; 0xffffffff
 128:	603b      	str	r3, [r7, #0]
 12a:	683b      	ldr	r3, [r7, #0]
 12c:	2b00      	cmp	r3, #0
 12e:	dcf0      	bgt.n	112 <init+0x76>
 130:	f107 070c 	add.w	r7, r7, #12
 134:	46bd      	mov	sp, r7
 136:	bc80      	pop	{r7}
 138:	4770      	bx	lr
 13a:	bf00      	nop

0000013c <main>:
 13c:	b580      	push	{r7, lr}
 13e:	b082      	sub	sp, #8
 140:	af02      	add	r7, sp, #8
 142:	f7ff ffab 	bl	9c <init>
 146:	f04f 0000 	mov.w	r0, #0
 14a:	f7ff fffe 	bl	0 <serial_init>
 14e:	f240 0000 	movw	r0, #0
 152:	f2c0 0000 	movt	r0, #0
 156:	f7ff fffe 	bl	0 <puts>
 15a:	f7ff fffe 	bl	0 <sys_len_test>
 15e:	4603      	mov	r3, r0
 160:	4618      	mov	r0, r3
 162:	f7ff fffe 	bl	0 <disp_integer>
 166:	f04f 0300 	mov.w	r3, #0
 16a:	9300      	str	r3, [sp, #0]
 16c:	f04f 0300 	mov.w	r3, #0
 170:	9301      	str	r3, [sp, #4]
 172:	f240 0000 	movw	r0, #0
 176:	f2c0 0000 	movt	r0, #0
 17a:	f240 0100 	movw	r1, #0
 17e:	f2c0 0100 	movt	r1, #0
 182:	f04f 0200 	mov.w	r2, #0
 186:	f44f 7380 	mov.w	r3, #256	; 0x100
 18a:	f7ff fffe 	bl	0 <kz_start>
 18e:	f04f 0300 	mov.w	r3, #0
 192:	4618      	mov	r0, r3
 194:	46bd      	mov	sp, r7
 196:	bd80      	pop	{r7, pc}
