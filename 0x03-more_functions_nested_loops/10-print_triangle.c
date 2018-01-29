#include "holberton.h"

/**
 * print_diagonal - prints diagonal line on terminal
 *
 * @n: parameter number of time diagonal line is printed
 */

void print_triangle(int size)
{
	int j = size - 1;
	int k = 0;
	int i;

	for (j; j >= k; j--)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}

		for (i; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
