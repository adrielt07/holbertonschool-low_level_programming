#include "holberton.h"

/**
 * *_strcat - combines 2nd strings to the 1st string appended
 *
 * @dest: takes the 1st string
 * @src: takes string to be appended (this is second string)
 *
 * Return: prints the whole string
 */

char *_strcat(char *dest, char *src)
{
	int j, x;

	for (x = 0; dest[x] != '\0'; x++)
	{
		x++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[x + j] = src[j];
	}
	return (dest);
}
