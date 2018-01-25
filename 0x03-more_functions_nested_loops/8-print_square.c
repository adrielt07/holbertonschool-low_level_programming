#include "holberton.h"

/**
 * print_square - pound # in the area of squar
 *
 * @size: print number of time # inside a square
 */

void print_square(int size)
{
	int j;
	int k;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
