#include "variadic_functions.h"

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
		{NULL, NULL},
	};

	int x, k;
	char *first;
	va_list arg_list;

	if (format == NULL)
	{	printf("nil\n");
		return;
	}

	x = 0;
	first = "";
	va_start(arg_list, format);

	while (format[x] != '\0' && format != NULL)
	{
		k = 0;
		while (t_format[k].s != NULL)
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
