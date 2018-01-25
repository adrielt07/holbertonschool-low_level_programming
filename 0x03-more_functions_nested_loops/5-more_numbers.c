#include "holberton.h"

/**
 * more_numbers - print number from 1 - 14
 */

void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar('1');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
