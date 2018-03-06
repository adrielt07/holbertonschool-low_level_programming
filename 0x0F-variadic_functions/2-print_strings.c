#include "variadic_functions.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * print_strings - prints string then new line
 * @separator: separator for strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *s;

	va_start(valist, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(valist, char *);

			if (s == NULL)
				s = "(nil)";
			printf("%s", s);

			if (i < n - 1)
				printf(", ");
		}
		printf("\n");
	}
}
