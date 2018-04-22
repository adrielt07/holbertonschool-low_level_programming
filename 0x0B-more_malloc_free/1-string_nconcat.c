#include "holberton.h"
#include "stdlib.h"

/**
 * _strlen - calculate the length of string
 * @s: string to be calculated
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string to be concatenated
 * @n: number of character to be concat
 * Return: NULL if P fails else return P
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int c;
	unsigned int l1;
	unsigned int l2;
	unsigned int t = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (n > l2)
	{
		n = l2;
	}
	else
	{
		l2 = n;
	}

	t = l1 + n;

	p = malloc(t + 1);
	if (p == NULL)
		return (NULL);

	for (c = 0; c < t; c++)
	{
		if (c < l1)
		{
			p[c] = s1[c];
		}
		else
		{
			p[c] = s2[c - l1];
		}
	}
	p[c] = '\0';

	return (p);
}
