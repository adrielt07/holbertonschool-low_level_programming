#include "holberton.h"

/**
 * print_numbers - print 0 - 9
 */

void print_numbers(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		_putchar(j);
       	}
	_putchar('\n');
}
