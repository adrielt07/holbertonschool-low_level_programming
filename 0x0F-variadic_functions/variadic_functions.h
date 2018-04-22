#ifndef __vaHolberton_
#define __vaHolberton_

#include "stdarg.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
/**
 * struct _format - structure takes string and match with func
 * @s: pointer to string
 * @f: pointer to function
 */

typedef struct _format
{
	char *s;
	void (*f)();
} _fmt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
