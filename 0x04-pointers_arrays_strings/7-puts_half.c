#include "holberton.h"

/**
 * puts_half - prints half of string
 *
 * @str: takes string parameter
 */

void puts_half(char *str)
{

	int n;
	int j;

	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}
	for (j = n / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
