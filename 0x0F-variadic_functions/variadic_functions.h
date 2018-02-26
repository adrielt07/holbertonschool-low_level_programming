#ifndef __vaHolberton_
#define __vaHolberton_
#include "stdarg.h"

/**
 * Prototypes
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
