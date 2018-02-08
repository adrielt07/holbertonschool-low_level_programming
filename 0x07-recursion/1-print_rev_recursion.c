#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: takes string
 */


void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
