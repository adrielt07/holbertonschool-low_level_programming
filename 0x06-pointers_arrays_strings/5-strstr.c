#include "holberton.h"
#define NULL 0

/**
 * _strncmp - compares two strings, n bytes
 * @s1: takes a string
 * @s2: takes a string
 * @n: number of string in s2 to compare
 * Return: 0 if strings are the same, else
 * positive if string s1 is longer
 * or negative if string s2 is longer
 */

int _strncmp(char *s1, char *s2, int n)
{
	int k = 0;

	n--;
	while (k <= n && s1 && s2)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		k++;
	}
	return (0);
}

/**
 * _strstr - looks for needle in haystack
 * @haystack: string to search in
 * @needle: string to search for in haystack
 * Return: the pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (needle[j])
	{
		j++;
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (_strncmp(haystack + i, needle, j) == 0)
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
