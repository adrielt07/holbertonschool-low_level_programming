#include "holberton.h"

/**
 * print_most_numbers - print 0 - 9
 * but don't print 2 and 4
 */

void print_most_numbers(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		if (j != '2' && j != '4')
		_putchar(j);
	}
	_putchar('\n');
}
