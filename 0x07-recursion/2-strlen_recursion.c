#include "holberton.h"

/**
 * _strlen_recursion - prints string length
 * @s: takes string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
		return (n + 1) + _strlen_recursion(s + 1);

}
