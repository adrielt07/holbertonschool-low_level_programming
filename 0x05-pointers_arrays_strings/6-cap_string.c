#include "holberton.h"

/**
 * convert - converts a char from lowercase to uppser case
 * @s: takes a char
 * Return: an uppercase or lowercase
 */
char convert(char s)
{
	char i = 'a';

	while (i != 'z')
	{
		if (i == s)
			return (i - 32);
		i++;
	}
	return (s);
}

/**
 * checker - checks if a character is special
 * @s: takes a char
 * Return: 1 if it's a special character, else return 0
 */
int checker(char s)
{
	char *no = ",;.!?\"(){}\t\n ";
	int i = 0;

	while (no[i] != '\0')
	{
		if (no[i] == s)
			return (1);
		i++;
	}
	return (0);
}

/**
 * *cap_string - capitalize every word
 * @p: takes p strings
 * Return: The value of p
 */

char *cap_string(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (checker(p[i]) == 1)
		{
			i++;
			p[i] = convert(p[i]);
		}
		else
			i++;
	}
	return (p);
}
