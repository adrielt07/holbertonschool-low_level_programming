#include "stdio.h"

/**
 * print_to_98 - prints all values until 98
 *
 * @n: starting value
 */

void print_to_98(int n)
{
	int cpy_n = n;

	if (n < 98)
		for (; cpy_n < 98; cpy_n++)
			printf("%d, ", cpy_n);

	else if (n > 98)
		for (; cpy_n > 98; cpy_n--)
			printf("%d, ", cpy_n);
	printf("%d\n", 98);
}
