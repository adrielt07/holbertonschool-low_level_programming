#include "holberton.h"

/**
 * print_diagonal - prints diagonal line on terminal
 *
 * @n: parameter number of time diagonal line is printed
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (k = 0; k <= n; k++)
		{
			_putchar ('\\');
			_putchar ('\n');
			for (j = 0; j <= k; j++)
			{
				_putchar (' ');
			}
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
