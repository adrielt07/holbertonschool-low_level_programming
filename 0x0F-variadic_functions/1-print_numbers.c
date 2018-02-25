#include "variadic_functions.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_numbers - prints number followed by new line
 * @separator: separates each number
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(valist);
}
