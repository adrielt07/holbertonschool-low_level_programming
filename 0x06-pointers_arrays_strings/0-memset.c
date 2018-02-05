#include "holberton.h"

/**
 * *_memset - change the value of an array
 * @s: what array to change
 * @b: what value to change to
 * @n: number of elements to change
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
