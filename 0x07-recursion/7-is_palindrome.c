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
		return ((n + 1) + (_strlen_recursion(s + 1)));
	else
		return (0);
}

/**
 * _checker - takes string and compare it from one end to another
 * @s: string to compare
 * @len: length of the string (its end)
 * @zero: beginning of the string
 * Return: 1 if it's a palindrome else 0
 */

int _checker(char *s, int len, int zero)
{
	int i = 0;

	if (s[len] == s[zero])
	{
		i = 1;
		_checker(s, len - 1, zero + 1);
		return (i);
	}
	else
	{
		i = 0;
		return (i);
	}
}

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int zero = 0;

	len--;
	if (_checker(s, len, zero) == 1)
		return (1);
	else
		return (0);
}
