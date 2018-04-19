#include "holberton.h"

/**
 * print_numbers - print 0 - 9
 */

void print_numbers(void)
{
	int j = 0;

	while (j <= 9)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
