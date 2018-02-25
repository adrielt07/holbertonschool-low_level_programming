#include "variadic_functions.h"
#include "stdlib.h"
#include "stdio.h"

/**
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	va_start(valist ,n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(valist, char *));
			if (i < n - 1)
				printf(", ");
		}
		printf("\n");
	}
}
