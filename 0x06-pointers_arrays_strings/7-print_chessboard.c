#include "holberton.h"

/**
 * print_chessboard - prints chessboard
 * @a: takes array
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (c = 0; c < 8; c++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[c][r]);
		}
		_putchar('\n');
	}
}
