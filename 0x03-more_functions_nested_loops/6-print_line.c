#include "holberton.h"
/**
 * print_line - prints number of underscores in one line
 *
 * @n: represents numbers of underscores
 */

void print_line(int n)
{
	int j = 0;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		do
		{
			_putchar ('_');
			j++;
		} while (j <= n);
		_putchar ('\n');
	}
}
