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
 * str_concat - append s2 to the end of s1
 * @s1: first string
 * @s2: 2nd string
 * Return: Null of s_ptr is null else return s_ptr
 */

char *str_concat(char *s1, char *s2)
{
	int l = _strlen(s1) + _strlen(s2);
	int l_s1 = _strlen(s1);
	char *s_ptr;
	int c = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	s_ptr = malloc(sizeof(char) * l + 1);
	if (s_ptr == NULL)
		return (NULL);

	while (c <= l)
	{
		if (c < l_s1)
		{
			s_ptr[c] = s1[c];
		}
		else
		{
			s_ptr[c] = s2[c - l_s1];
		}
		c++;
	}
	s_ptr[c + 1] = '\0';
	return (s_ptr);
}
