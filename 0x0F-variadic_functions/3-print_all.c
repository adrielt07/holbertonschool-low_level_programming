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
	s = va_arg(valist, char *);
	if (s == NULL)
                s = "(nil)";
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

	int x, k, first;
	va_list arg_list;
	x = 0;
	first = 0;
	va_start(arg_list, format);

	if (format != NULL)
	{
		while (format[x] != '\0')
		{
			k = 0;
			while (t_format[k].s != NULL)
			{
				if (format[x] == *t_format[k].s)
				{
					if (first > 0)
					{
						printf(", ");
					}
					t_format[k].f(arg_list);
					first++;
				}
				k++;
			}
			x++;
		}
	}
	va_end (arg_list);
	printf("\n");
}
