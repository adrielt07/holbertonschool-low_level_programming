#include "holberton.h"

/**
 * _strlen - counts the length of string
 *
 * @s: parameter for string
 *
 * Return: returns the length of string
 */

int _strlen(char *s)
{
	int n = 0;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
