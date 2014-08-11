
command.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <send_use>:
   0:	b580      	push	{r7, lr}
   2:	b082      	sub	sp, #8
   4:	af00      	add	r7, sp, #0
   6:	6038      	str	r0, [r7, #0]
   8:	f04f 0003 	mov.w	r0, #3
   c:	f7ff fffe 	bl	0 <kz_kmalloc>
  10:	6078      	str	r0, [r7, #4]
  12:	687b      	ldr	r3, [r7, #4]
  14:	f04f 0230 	mov.w	r2, #48	; 0x30
  18:	701a      	strb	r2, [r3, #0]
  1a:	687b      	ldr	r3, [r7, #4]
  1c:	f103 0301 	add.w	r3, r3, #1
  20:	f04f 0275 	mov.w	r2, #117	; 0x75
  24:	701a      	strb	r2, [r3, #0]
  26:	687b      	ldr	r3, [r7, #4]
  28:	f103 0302 	add.w	r3, r3, #2
  2c:	683a      	ldr	r2, [r7, #0]
  2e:	b2d2      	uxtb	r2, r2
  30:	f102 0230 	add.w	r2, r2, #48	; 0x30
  34:	b2d2      	uxtb	r2, r2
  36:	701a      	strb	r2, [r3, #0]
  38:	f04f 0001 	mov.w	r0, #1
  3c:	f04f 0103 	mov.w	r1, #3
  40:	687a      	ldr	r2, [r7, #4]
  42:	f7ff fffe 	bl	0 <kz_send>
  46:	f107 0708 	add.w	r7, r7, #8
  4a:	46bd      	mov	sp, r7
  4c:	bd80      	pop	{r7, pc}
  4e:	bf00      	nop

00000050 <send_write>:
  50:	b580      	push	{r7, lr}
  52:	b083      	sub	sp, #12
  54:	af00      	add	r7, sp, #0
  56:	6038      	str	r0, [r7, #0]
  58:	6838      	ldr	r0, [r7, #0]
  5a:	f7ff fffe 	bl	0 <strlen>
  5e:	60b8      	str	r0, [r7, #8]
  60:	68bb      	ldr	r3, [r7, #8]
  62:	f103 0302 	add.w	r3, r3, #2
  66:	4618      	mov	r0, r3
  68:	f7ff fffe 	bl	0 <kz_kmalloc>
  6c:	6078      	str	r0, [r7, #4]
  6e:	687b      	ldr	r3, [r7, #4]
  70:	f04f 0230 	mov.w	r2, #48	; 0x30
  74:	701a      	strb	r2, [r3, #0]
  76:	687b      	ldr	r3, [r7, #4]
  78:	f103 0301 	add.w	r3, r3, #1
  7c:	f04f 0277 	mov.w	r2, #119	; 0x77
  80:	701a      	strb	r2, [r3, #0]
  82:	687b      	ldr	r3, [r7, #4]
  84:	f103 0302 	add.w	r3, r3, #2
  88:	4618      	mov	r0, r3
  8a:	6839      	ldr	r1, [r7, #0]
  8c:	68ba      	ldr	r2, [r7, #8]
  8e:	f7ff fffe 	bl	0 <memcpy>
  92:	68bb      	ldr	r3, [r7, #8]
  94:	f103 0302 	add.w	r3, r3, #2
  98:	f04f 0001 	mov.w	r0, #1
  9c:	4619      	mov	r1, r3
  9e:	687a      	ldr	r2, [r7, #4]
  a0:	f7ff fffe 	bl	0 <kz_send>
  a4:	f107 070c 	add.w	r7, r7, #12
  a8:	46bd      	mov	sp, r7
  aa:	bd80      	pop	{r7, pc}

000000ac <send_icmp>:
  ac:	b580      	push	{r7, lr}
  ae:	b081      	sub	sp, #4
  b0:	af00      	add	r7, sp, #0
  b2:	f04f 0018 	mov.w	r0, #24
  b6:	f7ff fffe 	bl	0 <kz_kmalloc>
  ba:	6038      	str	r0, [r7, #0]
  bc:	683b      	ldr	r3, [r7, #0]
  be:	f04f 0273 	mov.w	r2, #115	; 0x73
  c2:	701a      	strb	r2, [r3, #0]
  c4:	683b      	ldr	r3, [r7, #0]
  c6:	f04f 0203 	mov.w	r2, #3
  ca:	609a      	str	r2, [r3, #8]
  cc:	683a      	ldr	r2, [r7, #0]
  ce:	f640 2301 	movw	r3, #2561	; 0xa01
  d2:	f2cc 03a8 	movt	r3, #49320	; 0xc0a8
  d6:	60d3      	str	r3, [r2, #12]
  d8:	f04f 000a 	mov.w	r0, #10
  dc:	f04f 0100 	mov.w	r1, #0
  e0:	683a      	ldr	r2, [r7, #0]
  e2:	f7ff fffe 	bl	0 <kz_send>
  e6:	f107 0704 	add.w	r7, r7, #4
  ea:	46bd      	mov	sp, r7
  ec:	bd80      	pop	{r7, pc}
  ee:	bf00      	nop

000000f0 <send_tftp>:
  f0:	b580      	push	{r7, lr}
  f2:	b081      	sub	sp, #4
  f4:	af00      	add	r7, sp, #0
  f6:	f04f 0018 	mov.w	r0, #24
  fa:	f7ff fffe 	bl	0 <kz_kmalloc>
  fe:	6038      	str	r0, [r7, #0]
 100:	683b      	ldr	r3, [r7, #0]
 102:	f04f 0273 	mov.w	r2, #115	; 0x73
 106:	701a      	strb	r2, [r3, #0]
 108:	683a      	ldr	r2, [r7, #0]
 10a:	f640 2301 	movw	r3, #2561	; 0xa01
 10e:	f2cc 03a8 	movt	r3, #49320	; 0xc0a8
 112:	6093      	str	r3, [r2, #8]
 114:	f04f 0010 	mov.w	r0, #16
 118:	f04f 0100 	mov.w	r1, #0
 11c:	683a      	ldr	r2, [r7, #0]
 11e:	f7ff fffe 	bl	0 <kz_send>
 122:	f107 0704 	add.w	r7, r7, #4
 126:	46bd      	mov	sp, r7
 128:	bd80      	pop	{r7, pc}
 12a:	bf00      	nop

0000012c <func>:
 12c:	b580      	push	{r7, lr}
 12e:	b081      	sub	sp, #4
 130:	af00      	add	r7, sp, #0
 132:	6038      	str	r0, [r7, #0]
 134:	f240 0000 	movw	r0, #0
 138:	f2c0 0000 	movt	r0, #0
 13c:	6839      	ldr	r1, [r7, #0]
 13e:	f7ff fffe 	bl	0 <strcpy>
 142:	f240 0300 	movw	r3, #0
 146:	f2c0 0300 	movt	r3, #0
 14a:	4618      	mov	r0, r3
 14c:	f107 0704 	add.w	r7, r7, #4
 150:	46bd      	mov	sp, r7
 152:	bd80      	pop	{r7, pc}

00000154 <dump>:
 154:	b580      	push	{r7, lr}
 156:	b083      	sub	sp, #12
 158:	af00      	add	r7, sp, #0
 15a:	6078      	str	r0, [r7, #4]
 15c:	6039      	str	r1, [r7, #0]
 15e:	683b      	ldr	r3, [r7, #0]
 160:	2b00      	cmp	r3, #0
 162:	da08      	bge.n	176 <dump+0x22>
 164:	f240 0000 	movw	r0, #0
 168:	f2c0 0000 	movt	r0, #0
 16c:	f7ff fffe 	bl	0 <puts>
 170:	f04f 33ff 	mov.w	r3, #4294967295	; 0xffffffff
 174:	e039      	b.n	1ea <dump+0x96>
 176:	f04f 0300 	mov.w	r3, #0
 17a:	60bb      	str	r3, [r7, #8]
 17c:	e029      	b.n	1d2 <dump+0x7e>
 17e:	68bb      	ldr	r3, [r7, #8]
 180:	687a      	ldr	r2, [r7, #4]
 182:	18d3      	adds	r3, r2, r3
 184:	781b      	ldrb	r3, [r3, #0]
 186:	4618      	mov	r0, r3
 188:	f04f 0102 	mov.w	r1, #2
 18c:	f7ff fffe 	bl	0 <putxval>
 190:	68bb      	ldr	r3, [r7, #8]
 192:	f003 030f 	and.w	r3, r3, #15
 196:	2b0f      	cmp	r3, #15
 198:	d106      	bne.n	1a8 <dump+0x54>
 19a:	f240 0000 	movw	r0, #0
 19e:	f2c0 0000 	movt	r0, #0
 1a2:	f7ff fffe 	bl	0 <puts>
 1a6:	e010      	b.n	1ca <dump+0x76>
 1a8:	68bb      	ldr	r3, [r7, #8]
 1aa:	f003 030f 	and.w	r3, r3, #15
 1ae:	2b07      	cmp	r3, #7
 1b0:	d105      	bne.n	1be <dump+0x6a>
 1b2:	f240 0000 	movw	r0, #0
 1b6:	f2c0 0000 	movt	r0, #0
 1ba:	f7ff fffe 	bl	0 <puts>
 1be:	f240 0000 	movw	r0, #0
 1c2:	f2c0 0000 	movt	r0, #0
 1c6:	f7ff fffe 	bl	0 <puts>
 1ca:	68bb      	ldr	r3, [r7, #8]
 1cc:	f103 0301 	add.w	r3, r3, #1
 1d0:	60bb      	str	r3, [r7, #8]
 1d2:	68ba      	ldr	r2, [r7, #8]
 1d4:	683b      	ldr	r3, [r7, #0]
 1d6:	429a      	cmp	r2, r3
 1d8:	dbd1      	blt.n	17e <dump+0x2a>
 1da:	f240 0000 	movw	r0, #0
 1de:	f2c0 0000 	movt	r0, #0
 1e2:	f7ff fffe 	bl	0 <puts>
 1e6:	f04f 0300 	mov.w	r3, #0
 1ea:	4618      	mov	r0, r3
 1ec:	f107 070c 	add.w	r7, r7, #12
 1f0:	46bd      	mov	sp, r7
 1f2:	bd80      	pop	{r7, pc}

000001f4 <wait>:
 1f4:	b480      	push	{r7}
 1f6:	b081      	sub	sp, #4
 1f8:	af00      	add	r7, sp, #0
 1fa:	f04f 0300 	mov.w	r3, #0
 1fe:	603b      	str	r3, [r7, #0]
 200:	e003      	b.n	20a <wait+0x16>
 202:	683b      	ldr	r3, [r7, #0]
 204:	f103 0301 	add.w	r3, r3, #1
 208:	603b      	str	r3, [r7, #0]
 20a:	683a      	ldr	r2, [r7, #0]
 20c:	f643 2397 	movw	r3, #14999	; 0x3a97
 210:	429a      	cmp	r2, r3
 212:	ddf6      	ble.n	202 <wait+0xe>
 214:	f107 0704 	add.w	r7, r7, #4
 218:	46bd      	mov	sp, r7
 21a:	bc80      	pop	{r7}
 21c:	4770      	bx	lr
 21e:	bf00      	nop

00000220 <bootload_main>:
 220:	b580      	push	{r7, lr}
 222:	b084      	sub	sp, #16
 224:	af00      	add	r7, sp, #0
 226:	6038      	str	r0, [r7, #0]
 228:	f240 0300 	movw	r3, #0
 22c:	f2c0 0300 	movt	r3, #0
 230:	60fb      	str	r3, [r7, #12]
 232:	6838      	ldr	r0, [r7, #0]
 234:	f240 0100 	movw	r1, #0
 238:	f2c0 0100 	movt	r1, #0
 23c:	f7ff fffe 	bl	0 <strcmp>
 240:	4603      	mov	r3, r0
 242:	2b00      	cmp	r3, #0
 244:	d11f      	bne.n	286 <bootload_main+0x66>
 246:	68f8      	ldr	r0, [r7, #12]
 248:	f7ff fffe 	bl	0 <xmodem_recv>
 24c:	4602      	mov	r2, r0
 24e:	f240 0300 	movw	r3, #0
 252:	f2c0 0300 	movt	r3, #0
 256:	601a      	str	r2, [r3, #0]
 258:	f7ff ffcc 	bl	1f4 <wait>
 25c:	f240 0300 	movw	r3, #0
 260:	f2c0 0300 	movt	r3, #0
 264:	681b      	ldr	r3, [r3, #0]
 266:	2b00      	cmp	r3, #0
 268:	da06      	bge.n	278 <bootload_main+0x58>
 26a:	f240 0000 	movw	r0, #0
 26e:	f2c0 0000 	movt	r0, #0
 272:	f7ff fffe 	bl	0 <puts>
 276:	e05e      	b.n	f4 <send_tftp+0x4>
 278:	f240 0000 	movw	r0, #0
 27c:	f2c0 0000 	movt	r0, #0
 280:	f7ff fffe 	bl	0 <puts>
 284:	e057      	b.n	336 <bootload_main+0x116>
 286:	6838      	ldr	r0, [r7, #0]
 288:	f240 0100 	movw	r1, #0
 28c:	f2c0 0100 	movt	r1, #0
 290:	f7ff fffe 	bl	0 <strcmp>
 294:	4603      	mov	r3, r0
 296:	2b00      	cmp	r3, #0
 298:	d11f      	bne.n	2da <bootload_main+0xba>
 29a:	f240 0000 	movw	r0, #0
 29e:	f2c0 0000 	movt	r0, #0
 2a2:	f7ff fffe 	bl	0 <puts>
 2a6:	f240 0300 	movw	r3, #0
 2aa:	f2c0 0300 	movt	r3, #0
 2ae:	681b      	ldr	r3, [r3, #0]
 2b0:	4618      	mov	r0, r3
 2b2:	f04f 0100 	mov.w	r1, #0
 2b6:	f7ff fffe 	bl	0 <putxval>
 2ba:	f240 0000 	movw	r0, #0
 2be:	f2c0 0000 	movt	r0, #0
 2c2:	f7ff fffe 	bl	0 <puts>
 2c6:	f240 0300 	movw	r3, #0
 2ca:	f2c0 0300 	movt	r3, #0
 2ce:	681b      	ldr	r3, [r3, #0]
 2d0:	68f8      	ldr	r0, [r7, #12]
 2d2:	4619      	mov	r1, r3
 2d4:	f7ff ff3e 	bl	154 <dump>
 2d8:	e02d      	b.n	336 <bootload_main+0x116>
 2da:	6838      	ldr	r0, [r7, #0]
 2dc:	f240 0100 	movw	r1, #0
 2e0:	f2c0 0100 	movt	r1, #0
 2e4:	f7ff fffe 	bl	0 <strcmp>
 2e8:	4603      	mov	r3, r0
 2ea:	2b00      	cmp	r3, #0
 2ec:	d123      	bne.n	336 <bootload_main+0x116>
 2ee:	68f8      	ldr	r0, [r7, #12]
 2f0:	f7ff fffe 	bl	0 <elf_load>
 2f4:	60b8      	str	r0, [r7, #8]
 2f6:	68bb      	ldr	r3, [r7, #8]
 2f8:	2b00      	cmp	r3, #0
 2fa:	d106      	bne.n	30a <bootload_main+0xea>
 2fc:	f240 0000 	movw	r0, #0
 300:	f2c0 0000 	movt	r0, #0
 304:	f7ff fffe 	bl	0 <puts>
 308:	e015      	b.n	9e <send_write+0x4e>
 30a:	f240 0000 	movw	r0, #0
 30e:	f2c0 0000 	movt	r0, #0
 312:	f7ff fffe 	bl	0 <puts>
 316:	68bb      	ldr	r3, [r7, #8]
 318:	4618      	mov	r0, r3
 31a:	f04f 0100 	mov.w	r1, #0
 31e:	f7ff fffe 	bl	0 <putxval>
 322:	f240 0000 	movw	r0, #0
 326:	f2c0 0000 	movt	r0, #0
 32a:	f7ff fffe 	bl	0 <puts>
 32e:	68bb      	ldr	r3, [r7, #8]
 330:	607b      	str	r3, [r7, #4]
 332:	687b      	ldr	r3, [r7, #4]
 334:	4798      	blx	r3
 336:	f04f 0300 	mov.w	r3, #0
 33a:	4618      	mov	r0, r3
 33c:	f107 0710 	add.w	r7, r7, #16
 340:	46bd      	mov	sp, r7
 342:	bd80      	pop	{r7, pc}

00000344 <bootload_ready>:
 344:	b580      	push	{r7, lr}
 346:	b086      	sub	sp, #24
 348:	af00      	add	r7, sp, #0
 34a:	6078      	str	r0, [r7, #4]
 34c:	6039      	str	r1, [r7, #0]
 34e:	f107 0308 	add.w	r3, r7, #8
 352:	4618      	mov	r0, r3
 354:	6879      	ldr	r1, [r7, #4]
 356:	683a      	ldr	r2, [r7, #0]
 358:	f7ff fffe 	bl	0 <memcpy>
 35c:	f107 0308 	add.w	r3, r7, #8
 360:	4618      	mov	r0, r3
 362:	f7ff ff5d 	bl	220 <bootload_main>
 366:	f107 0718 	add.w	r7, r7, #24
 36a:	46bd      	mov	sp, r7
 36c:	bd80      	pop	{r7, pc}
 36e:	bf00      	nop

00000370 <command_main>:
 370:	b580      	push	{r7, lr}
 372:	b084      	sub	sp, #16
 374:	af00      	add	r7, sp, #0
 376:	6078      	str	r0, [r7, #4]
 378:	6039      	str	r1, [r7, #0]
 37a:	f240 0300 	movw	r3, #0
 37e:	f2c0 0300 	movt	r3, #0
 382:	681b      	ldr	r3, [r3, #0]
 384:	2b00      	cmp	r3, #0
 386:	d10f      	bne.n	3a8 <command_main+0x38>
 388:	f04f 0001 	mov.w	r0, #1
 38c:	f7ff fe38 	bl	0 <send_use>
 390:	f240 0300 	movw	r3, #0
 394:	f2c0 0300 	movt	r3, #0
 398:	681b      	ldr	r3, [r3, #0]
 39a:	f103 0201 	add.w	r2, r3, #1
 39e:	f240 0300 	movw	r3, #0
 3a2:	f2c0 0300 	movt	r3, #0
 3a6:	601a      	str	r2, [r3, #0]
 3a8:	f240 0300 	movw	r3, #0
 3ac:	f2c0 0300 	movt	r3, #0
 3b0:	681b      	ldr	r3, [r3, #0]
 3b2:	2b00      	cmp	r3, #0
 3b4:	d117      	bne.n	3e6 <command_main+0x76>
 3b6:	f240 0000 	movw	r0, #0
 3ba:	f2c0 0000 	movt	r0, #0
 3be:	f7ff fe47 	bl	50 <send_write>
 3c2:	f7ff fffe 	bl	0 <sys_len_test>
 3c6:	4603      	mov	r3, r0
 3c8:	4618      	mov	r0, r3
 3ca:	f7ff fffe 	bl	0 <disp_integer>
 3ce:	f240 0300 	movw	r3, #0
 3d2:	f2c0 0300 	movt	r3, #0
 3d6:	681b      	ldr	r3, [r3, #0]
 3d8:	f103 0201 	add.w	r2, r3, #1
 3dc:	f240 0300 	movw	r3, #0
 3e0:	f2c0 0300 	movt	r3, #0
 3e4:	601a      	str	r2, [r3, #0]
 3e6:	f107 0208 	add.w	r2, r7, #8
 3ea:	f107 030c 	add.w	r3, r7, #12
 3ee:	f04f 0000 	mov.w	r0, #0
 3f2:	4611      	mov	r1, r2
 3f4:	461a      	mov	r2, r3
 3f6:	f7ff fffe 	bl	0 <kz_recv>
 3fa:	4603      	mov	r3, r0
 3fc:	f1b3 3fff 	cmp.w	r3, #4294967295	; 0xffffffff
 400:	f000 8085 	beq.w	50e <command_main+0x19e>
 404:	68fb      	ldr	r3, [r7, #12]
 406:	2b00      	cmp	r3, #0
 408:	d106      	bne.n	418 <command_main+0xa8>
 40a:	f240 0000 	movw	r0, #0
 40e:	f2c0 0000 	movt	r0, #0
 412:	f7ff fe1d 	bl	50 <send_write>
 416:	e07a      	b.n	50e <command_main+0x19e>
 418:	68fa      	ldr	r2, [r7, #12]
 41a:	68bb      	ldr	r3, [r7, #8]
 41c:	18d3      	adds	r3, r2, r3
 41e:	f04f 0200 	mov.w	r2, #0
 422:	701a      	strb	r2, [r3, #0]
 424:	f240 0300 	movw	r3, #0
 428:	f2c0 0300 	movt	r3, #0
 42c:	f04f 0200 	mov.w	r2, #0
 430:	601a      	str	r2, [r3, #0]
 432:	68fa      	ldr	r2, [r7, #12]
 434:	68bb      	ldr	r3, [r7, #8]
 436:	4610      	mov	r0, r2
 438:	4619      	mov	r1, r3
 43a:	f7ff fffe 	bl	344 <bootload_ready>
 43e:	68fb      	ldr	r3, [r7, #12]
 440:	4618      	mov	r0, r3
 442:	f240 0100 	movw	r1, #0
 446:	f2c0 0100 	movt	r1, #0
 44a:	f04f 0204 	mov.w	r2, #4
 44e:	f7ff fffe 	bl	0 <strncmp>
 452:	4603      	mov	r3, r0
 454:	2b00      	cmp	r3, #0
 456:	d10c      	bne.n	472 <command_main+0x102>
 458:	68fb      	ldr	r3, [r7, #12]
 45a:	f103 0304 	add.w	r3, r3, #4
 45e:	4618      	mov	r0, r3
 460:	f7ff fdf6 	bl	50 <send_write>
 464:	f240 0000 	movw	r0, #0
 468:	f2c0 0000 	movt	r0, #0
 46c:	f7ff fdf0 	bl	50 <send_write>
 470:	e049      	b.n	506 <command_main+0x196>
 472:	68fb      	ldr	r3, [r7, #12]
 474:	4618      	mov	r0, r3
 476:	f240 0100 	movw	r1, #0
 47a:	f2c0 0100 	movt	r1, #0
 47e:	f04f 0204 	mov.w	r2, #4
 482:	f7ff fffe 	bl	0 <strncmp>
 486:	4603      	mov	r3, r0
 488:	2b00      	cmp	r3, #0
 48a:	d108      	bne.n	49e <command_main+0x12e>
 48c:	f240 0000 	movw	r0, #0
 490:	f2c0 0000 	movt	r0, #0
 494:	f7ff fddc 	bl	50 <send_write>
 498:	f7ff fe08 	bl	ac <send_icmp>
 49c:	e033      	b.n	506 <command_main+0x196>
 49e:	68fb      	ldr	r3, [r7, #12]
 4a0:	4618      	mov	r0, r3
 4a2:	f240 0100 	movw	r1, #0
 4a6:	f2c0 0100 	movt	r1, #0
 4aa:	f04f 0204 	mov.w	r2, #4
 4ae:	f7ff fffe 	bl	0 <strncmp>
 4b2:	4603      	mov	r3, r0
 4b4:	2b00      	cmp	r3, #0
 4b6:	d108      	bne.n	4ca <command_main+0x15a>
 4b8:	f240 0000 	movw	r0, #0
 4bc:	f2c0 0000 	movt	r0, #0
 4c0:	f7ff fdc6 	bl	50 <send_write>
 4c4:	f7ff fe14 	bl	f0 <send_tftp>
 4c8:	e01d      	b.n	506 <command_main+0x196>
 4ca:	68fb      	ldr	r3, [r7, #12]
 4cc:	4618      	mov	r0, r3
 4ce:	f240 0100 	movw	r1, #0
 4d2:	f2c0 0100 	movt	r1, #0
 4d6:	f04f 0204 	mov.w	r2, #4
 4da:	f7ff fffe 	bl	0 <strncmp>
 4de:	4603      	mov	r3, r0
 4e0:	2b00      	cmp	r3, #0
 4e2:	d10a      	bne.n	4fa <command_main+0x18a>
 4e4:	68fb      	ldr	r3, [r7, #12]
 4e6:	f103 0304 	add.w	r3, r3, #4
 4ea:	4618      	mov	r0, r3
 4ec:	f7ff fffe 	bl	12c <func>
 4f0:	4603      	mov	r3, r0
 4f2:	4618      	mov	r0, r3
 4f4:	f7ff fdac 	bl	50 <send_write>
 4f8:	e005      	b.n	f2 <send_tftp+0x2>
 4fa:	f240 0000 	movw	r0, #0
 4fe:	f2c0 0000 	movt	r0, #0
 502:	f7ff fda5 	bl	50 <send_write>
 506:	68fb      	ldr	r3, [r7, #12]
 508:	4618      	mov	r0, r3
 50a:	f7ff fffe 	bl	0 <kz_kmfree>
 50e:	f04f 0300 	mov.w	r3, #0
 512:	4618      	mov	r0, r3
 514:	f107 0710 	add.w	r7, r7, #16
 518:	46bd      	mov	sp, r7
 51a:	bd80      	pop	{r7, pc}
