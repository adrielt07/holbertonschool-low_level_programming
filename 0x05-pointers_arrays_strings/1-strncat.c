#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: parameter that keep the value + concatenated string
 * @src: string to be concatenated by # of n
 * @n: number of char to be concatenated
 *
 * Return: returns dest + continated string of src (by # of n)
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	for (j = 0; dest[j] != '\0'; j++)
	{
		j++;
	}

	for (i = 0; src[i] < src[n]; i++)
	{
		dest[j + i] = src[i];
	}

	return (dest);
}
