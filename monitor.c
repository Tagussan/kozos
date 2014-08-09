/*
	monitor.c

	original code: SASANO Takayoshi
	--- public domain, no warranty.
*/
#include "defines.h"
#include "lib.h"

typedef	unsigned long	uintptr_t;
typedef	signed long	intptr_t;
typedef	unsigned long	uint32_t;
typedef	unsigned short	uint16_t;
typedef	unsigned char	uint8_t;

#define	putxA(v)	putxval((v), 8)
#define	putx8(v)	putxval((v), 8)
#define	putx4(v)	putxval((v), 4)
#define	putx2(v)	putxval((v), 2)
#define	putch(c)	putc(c)
#define	putstr(str)	puts(str)
#define	getstr(str)	gets(str)

/* メモリ操作 */
static	void		poke32(uintptr_t addr, uint32_t val)
					{*(uint32_t *)(addr) = val;}
static	void		poke16(uintptr_t addr, uint16_t val)
					{*(uint16_t *)(addr) = val;}
static	void		poke8(uintptr_t addr, uint8_t val)
					{*(uint8_t *)(addr) = val;}
static	uint32_t	peek32(uintptr_t addr)
					{return *(uint32_t *)(addr);}
static	uint16_t	peek16(uintptr_t addr)
					{return *(uint16_t *)(addr);}
static	uint8_t		peek8(uintptr_t addr)
					{return *(uint8_t *)(addr);}

/* I/O空間を持たない機種ではpoke/peekのエイリアスとする */
#define	out32(addr, val)	poke32(addr, val)
#define	out16(addr, val)	poke16(addr, val)
#define	out8(addr, val)		poke8(addr, val)
#define	in32(addr)		peek32(addr)
#define	in16(addr)		peek16(addr)
#define	in8(addr)		peek8(addr)

#define	DISP_WIDTH	16
#define	DISP_STEP	64
#define	ADDR_RANGE	0x01000000

/* ビットマスク（アドレス整列用） */
static	uintptr_t	align_val(uintptr_t val, int bytes)
{
	switch (bytes) {
	case	4:
		val >>= 2; val <<= 2;
		break;
	case	2:
		val >>= 1; val <<= 1;
		break;
	default:
		/* do nothing */
		break;
	}

	return val;
}

/* メモリ内容表示 */
static	void	putxX_peekX(uintptr_t addr, int bytes)
{
	switch (bytes) {
	case	4:
		putx8(peek32(addr));
		break;
	case	2:
		putx4(peek16(addr));
		break;
	case	1:
		putx2(peek8(addr));
		break;

	case	-4:
		putstr("    ");
		/* fall-through */
	case	-2:
		putstr("  ");
		/* fall-through */
	case	-1:
		putstr("  ");
		break;
	}

	return;
}

/* メモリ書き込み */
static	void	pokeX(uintptr_t addr, uint32_t val, int bytes)
{
	switch (bytes) {
	case	4:
		poke32(addr, val);
		break;
	case	2:
		poke16(addr, val);
		break;
	case	1:
		poke8(addr, val);
		break;
	}

	return;
}

/* コマンド文字列：ビット幅の取得 */
static	int	getbitwidth(char c)
{
	switch (c) {
	case	'B':
	case	'b':
		return 1;
	case	'H':
	case	'h':
		return 2;
	case	'W':
	case	'w':
		return 4;
	default:
		return -1;
	}
}

/* 16進数文字列→数値変換 */
static	uint32_t	hextol(char *nptr, char **endptr)
{
	uint32_t	v = 0;
	char	c;

	while (1) {
		c = *nptr;

		if (c >= '0' && c <= '9') {
			v = (v << 4) | (c - '0');
		} else if (c >= 'A' && c <= 'F') {
			v = (v << 4) | (c - 'A' + 10);
		} else if (c >= 'a' && c <= 'f') {
			v = (v << 4) | (c - 'a' + 10);
		} else {
			break;
		}

		nptr++;
	}

	*endptr = nptr;
	return v;
}

/* 引数の取得 */
static	int	getvalue(char *str, uint32_t *val, int maxval)
{
	int	n;
	uint32_t	t;
	char	*curr, *next;

	n = 0;
	curr = str;
	while (1) {
		t = hextol(curr, &next);
		if (curr == next) {
			/* 変換対象となる文字列が無い */
			if (*curr == '\0') break;
			else curr++;
		} else {
			/* 変換対象となる文字列がある */
			val[n++] = t;
			if (n >= maxval) break;
			curr = next;
		}
	}

	return n;
}

/* メモリダンプ */
static	void	memory_dump(uintptr_t start_addr, intptr_t length, int bytes)
{
	intptr_t	remain;
	int	i;
	uint8_t	c;

	/* 表示部分本体 */
	while (1) {
		remain = length;
		remain = (remain < DISP_WIDTH) ? remain : DISP_WIDTH;
		if (remain <= 0) break;

		putxA(start_addr);
		putstr(": ");

		/* 16進数ダンプ */
		for (i = 0; i < remain; i += bytes) {
			putxX_peekX(start_addr + i, bytes);
			putch(' ');
		}
		for (; i < DISP_WIDTH; i+= bytes) {
			putxX_peekX(0, -bytes);
			putch(' ');
		}
		putstr("  ");

		/* ASCIIダンプ（表示可能な文字に限る） */
		for (i = 0; i < remain; i++) {
			c = peek8(start_addr + i);
			putch((c >= ' ' && c <= '~') ? c : '.');
		}
		for (; i < DISP_WIDTH; i++) {
			putch(' ');
		}
		putch('\n');

		start_addr += remain;
		length -= remain;
	}

	return;
}

/* メモリ内容表示 */
static	int	command_dump(char *arg, uintptr_t *addr)
{
	int	err, bytes, n;
	intptr_t	len;
	uint32_t	val[2];
	
	err = bytes = getbitwidth(*arg++);
	if (err < 0) goto fin0;

	n = getvalue(arg, val, 2);
	if (n) *addr = val[0];
	*addr = align_val(*addr, bytes);

	if (n >= 2) {
		len = align_val(val[1] - val[0] + bytes, bytes);
		if (len > ADDR_RANGE) {
			err = -1;
			goto fin0;
		}
	} else {
		len = DISP_STEP;
	}

	memory_dump(*addr, len, bytes);
	*addr += len;

fin0:
	return err;
}

/* メモリ書き換え（対話処理） */
static	void	command_modify_interactive(uintptr_t addr, int bytes)
{
	char	buf[80];
	uint32_t	val;

	while (1) {
		putxA(addr);
		putstr(": ");

		putxX_peekX(addr, bytes);
		putstr(" -> ");

		getstr(buf);

		if (*buf == '.') break;
		else if (getvalue(buf, &val, 1)) pokeX(addr, val, bytes);

		addr += bytes;
	}

	return;
}

/* メモリ書き換え */
static	int	command_modify(char *arg, uintptr_t *addr)
{
	int	err, bytes, n;
	uint32_t	val[2];

	err = bytes = getbitwidth(*arg++);
	if (err < 0) goto fin0;

	n = getvalue(arg, val, 2);
	if (n) *addr = val[0];
	*addr = align_val(*addr, bytes);

	if (n >= 2) {
		pokeX(*addr, val[1], bytes);
	} else {
		command_modify_interactive(*addr, bytes);
	}

fin0:
	return err;
}

/* ポート入力 */
static	int	command_inport(char *arg)
{
	int	err, bytes;
	uintptr_t	addr;
	uint32_t	val;

	err = bytes = getbitwidth(*arg++);
	if (err < 0) goto fin0;

	if (getvalue(arg, &val, 1) != 1) {
		err = -1;
		goto fin0;
	}

	addr = align_val(val, bytes);
	putstr("Port ");
	putxA(addr);
	putstr(" -> ");

	switch (bytes) {
	case	4:
		putx8(in32(addr));
		break;
	case	2:
		putx4(in16(addr));
		break;
	case	1:
		putx2(in8(addr));
		break;
	}

	putch('\n');

fin0:
	return err;
}

/* ポート出力 */
static	int	command_outport(char *arg)
{
	int	err, bytes;
	uintptr_t	addr;
	uint32_t	val[2];

	err = bytes = getbitwidth(*arg++);
	if (err < 0) goto fin0;

	if (getvalue(arg, val, 2) != 2) {
		err = -1;
		goto fin0;
	}

	addr = align_val(val[0], bytes);
	putstr("Port ");
	putxA(addr);
	putstr(" <- ");

	switch (bytes) {
	case	4:
		putx8(val[1]);	out32(addr, val[1]);
		break;
	case	2:
		putx4(val[1]);	out16(addr, val[1]);
		break;
	case	1:
		putx2(val[1]);	out8(addr, val[1]);
		break;
	}

	putch('\n');

fin0:
	return err;
}

/* 実行 */
static	int	command_go(char *arg)
{
	int	err, n;
	uint32_t	val[2];
	int	(*func)(int arg);

	err = n = getvalue(arg, val, 2);
	switch (n) {
	case	0:
		err = -1;
		goto fin0;
	case	1:
		val[1] = 0;
		break;
	}

	func = (void *)val[0];
	(*func)(val[1]);

fin0:
	return err;
}

/* メイン */
int	monitor_main(void)
{
	int	err;
	uintptr_t	addr = 0;
	char	buf[80];

	while (1) {
		putstr("monitor> ");

		getstr(buf);

		switch (*buf) {
		case	'D':
		case	'd':
			err = command_dump(buf + 1, &addr);
			break;
		case	'M':
		case	'm':
			err = command_modify(buf + 1, &addr);
			break;
		case	'I':
		case	'i':
			err = command_inport(buf + 1);
			break;
		case	'O':
		case	'o':
			err = command_outport(buf + 1);
			break;
		case	'G':
		case	'g':
			err = command_go(buf + 1);
			break;
		case	'Q':
		case	'q':
			err = 0;
			goto fin0;
		default:
			err = -1;
			break;
		}

		if (err < 0) putstr("error.\n");
	}

fin0:
	return err;
}
