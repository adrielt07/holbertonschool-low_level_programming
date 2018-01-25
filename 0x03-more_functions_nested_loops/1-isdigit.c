#include "holberton.h"

/**
 * _isdigit - checks if parameter c is a digit
 *
 * @c: assign digit to variable c
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
