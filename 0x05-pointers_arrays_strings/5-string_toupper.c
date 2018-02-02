#include "holberton.h"

/**
 * string_toupper - replace lowercase to uppercase
 *
 * @p: takes string
 *
 * Return: return value of P which is uppercase letters
 */

char *string_toupper(char *p)
{
	int n;

	for (n = 0; p[n] != '\0'; n++)
	{
		if (p[n] >= 'a' && p[n] <= 'z')
		{
			p[n] = p[n] - 32;
		}
	}
	return (p);
}
