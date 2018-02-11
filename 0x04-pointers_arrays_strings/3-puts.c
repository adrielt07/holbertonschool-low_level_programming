#include "holberton.h"

/**
 * _puts - prints strings followed by a new line
 * @str: parameter for string
 */

void _puts(char *str)
{

	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
