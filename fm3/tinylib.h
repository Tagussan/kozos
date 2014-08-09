/*
 * tlib.h
 *
 *  Created on: 2010/08/09
 *      Author: Kentaro Sekimoto
 */

#ifndef TLIB_H_
#define TLIB_H_

#ifndef NULL
#define NULL ((void *)0)
#endif

#ifdef __GCC__
typedef __SIZE_TYPE__ size_t;
#else
typedef unsigned int size_t;
#endif

void *memset(void *dst, int c, size_t len);
void *memcpy(void *dst, const void *src, size_t len);
void *memmove(void *dst, void const *src, size_t len);
int memcmp(const void *p1, const void *p2, size_t len);
int strlen(const char *s);
char *strchr(char *s, int c);
char *strcpy(char *dst, const char *src);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *p1, const char *p2, int len);
char *strncpy(char *dst, const char *src, size_t len);
void *bsearch(void *key, void *base0, size_t nmemb, size_t size, int (*compar)());
int atoi(const char *s);
int isdigit (register int c);

#endif /* TLIB_H_ */
