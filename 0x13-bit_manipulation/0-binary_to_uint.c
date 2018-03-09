#include "holberton.h"

/**
 * _strlen - compute string const len
 * @s: takes a string
 * Return: length
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - conver binary to unsigned int
 * @b: string to be converted
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int sum = 0;
	unsigned int base_2 = 1;
	int len;
	unsigned int conv;

	if (b != NULL)
	{
		len = _strlen(b) - 1;

		while (len >= 0)
		{
			conv = b[len] - '0';

			if (conv != 1 && conv != 0)
				return (0);

			if (conv == 0)
				sum += 0;

			if (conv == 1)
				sum += base_2;

			len--;
			base_2 *= 2;
		}
		return (sum);
	}
	return (0);
}
