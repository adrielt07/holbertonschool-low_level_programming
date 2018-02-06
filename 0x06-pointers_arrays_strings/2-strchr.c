#include "holberton.h"

/**
 * *_strchr - prints a string from char c
 * @s: string to search from
 * @c: character to search for in s
 * Return: string from first c or null of nothing is found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ("");
}
