#include "variadic_functions.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void fmt_c(va_list valist)
{
	char c;
	c = va_arg(valist, int);
	printf("%c", c);
}

void fmt_i(va_list valist)
{
	int i;
	i = va_arg(valist, int);
	printf("%i", i);
}

void fmt_f(va_list valist)
{
	double f;
	f = va_arg(valist, double);
	printf("%f", f);
}

void fmt_s(va_list valist)
{
	char *s;
	if (s == NULL)
		s = "(nil)";
	s = va_arg(valist, char *);

	printf("%s", s);
}

void print_all(const char * const format, ...)
{

	_fmt t_format[] = {
		{"c", fmt_c},
		{"i", fmt_i},
		{"f", fmt_f},
		{"s", fmt_s},
		{NULL, NULL},
	};

	va_list arg_list;
	va_start(arg_list, format);

	int x;
	int k;

	x = 0;
	k = 0;

	while (format[x])
	{
		while (t_format[k].s != NULL)
		{
			if (*t_format[k].s == format[x])
			{
				t_format[k].f(arg_list);
			}
			k++;
		}
		x++;
	}
	printf("\n");
}
