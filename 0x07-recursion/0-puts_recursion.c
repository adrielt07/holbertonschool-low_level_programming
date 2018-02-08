#include "holberton.h"

/**
 * _puts_recursion - same function as puts
 *
 * @s: takes character
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
