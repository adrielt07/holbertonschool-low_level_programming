#include "holberton.h"

/**
 * print_rev - prints strings followed by a new line
 * @s: parameter for string
 */

void print_rev(char *s)
{

	int n = 0;

	while(s[n])
	{
		n++;
	}

	while(n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
