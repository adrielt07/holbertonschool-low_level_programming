#include "holberton.h"

/**
 * print_triangle - prints triangle
 *
 * @size: parameter print size of triangle
 */

void print_triangle(int size)
{
	int j = size - 1;
	int k = 0;
	int i;

	if (size < 1)
		_putchar('\n');

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
