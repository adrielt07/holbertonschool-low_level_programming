#include "variadic_functions.h"

/**
 * sum_them_all - sum of all arguments
 * @n: number of arguments
 * Return: 0 or Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int c;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (c = 0; c < n; c++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
