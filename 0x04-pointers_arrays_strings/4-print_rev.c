#include "holberton.h"

/**
 * print_rev - prints strings followed by a new line
 * @s: parameter for string
 */

void print_rev(char *s)
{

	int n;
	int x;

	for (n = 0; s[n] != '\0'; n++)
	{
		x = n;
	}
	for (x = n; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
