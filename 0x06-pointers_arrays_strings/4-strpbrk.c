#include "holberton.h"

/**
 * *_strpbrk - searches [accept] in a string and prints whole string from it
 * @s: takes a string
 * @accept: characters to search in a string
 * Return: strings or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n;
	unsigned int i;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[n] == accept[i])
				return (s + n);
		}
	}
	return ('\0');
}
