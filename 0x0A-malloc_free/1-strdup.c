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
 * _strdup - prints string
 * @str: string to be printed
 * Return: Null of no string else return string
 */

char *_strdup(char *str)
{
	int l = _strlen(str);
	char *s_ptr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		s_ptr = malloc(sizeof(char) * l);
	}

	if (s_ptr == NULL)
	{
		return (NULL);
	}

	while (i <= l)
	{
		s_ptr[i] = str[i];
		i++;
	}
	s_ptr[i] = '\0';
	return (s_ptr);
}
