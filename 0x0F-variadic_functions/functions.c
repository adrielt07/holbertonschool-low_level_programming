#include "variadic_functions.h"

/**
 * fmt_c - print character
 * @valist: takes a character
 */

void fmt_c(va_list valist)
{
	char c;

	c = va_arg(valist, int);
	printf("%c", c);
}

/**
 * fmt_i - prints interger
 * @valist: take int
 */

void fmt_i(va_list valist)
{
	int i;

	i = va_arg(valist, int);
	printf("%i", i);
}

/**
 * fmt_f - prints float
 * @valist: takes double
 */

void fmt_f(va_list valist)
{
	double f;

	f = va_arg(valist, double);
	printf("%f", f);
}

/**
 * fmt_s - prints string
 * @valist: takes string
 */

void fmt_s(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);
	if (s == NULL)
		printf("nil");
	else
		printf("%s", s);
}
