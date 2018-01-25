#include "holberton.h"
/**
 * _isupper - check if char is uppercase
 *
 *@c: parameter for char
 *
 *Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
