#ifndef _LIB_H_INCLUDED_
#define _LIB_H_INCLUDED_

void *memset(void *b, int c, long len);
void *memcpy(void *dst, const void *src, long len);
void *memmove(void *dst, const void *src, long len);
int memcmp(const void *b1, const void *b2, long len);
int strlen(const char *s);
char *strcpy(char *dst, const char *src);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, int len);
char *strchr(char *s, int c);

int putc(unsigned char c);    /* ��ʸ������ */
unsigned char getc(void);     /* ��ʸ������ */
int puts(char *str); /* ʸ�������� */
int gets(char *buf); /* ʸ������� */
int putxval(unsigned long value, int column); /* ���ͤ�16��ɽ�� */

unsigned short ntoh2(unsigned short n);
unsigned short hton2(unsigned short h);
unsigned long  ntoh4(unsigned long  n);
unsigned long  hton4(unsigned long  h);

#endif