#include "holberton.h"

/**
 * _strspn - print length of accept in string
 * @s: takes a string
 * @accept: what characters to look for
 * Return: number of length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int i;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[n] == accept[i])
				break;
		}
		if (s[n] != accept[i])
			break;
	}
	return (n);
}
