#include "holberton.h"
/**
 *
 */

void times_table(void)
{
int i;
int j;
int n;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
	n = i * j;

	if (j == 0)
	{
		_putchar('0');
	}
	else if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	}
_putchar('\n');
}
}
