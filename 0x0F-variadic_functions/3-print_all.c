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
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints string with the correct format
 * @format: format to use
 */

void print_all(const char * const format, ...)
{

	_fmt t_format[] = {
		{"c", fmt_c},
		{"i", fmt_i},
		{"f", fmt_f},
		{"s", fmt_s},
	};

	int x, k;
	char *first;
	va_list arg_list;

	x = 0;
	first = "";
	va_start(arg_list, format);
	while (format != NULL && format[x])
	{
		k = 0;
		while (k < 4)
		{
			if (format[x] == *t_format[k].s)
			{
				printf("%s", first);
				t_format[k].f(arg_list);
				first = ", ";
			}
			k++;
		}
		x++;
	}
	va_end(arg_list);
	printf("\n");
}
