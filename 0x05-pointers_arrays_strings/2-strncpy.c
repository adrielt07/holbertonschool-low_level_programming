#include "holberton.h"

/**
 * *_strncpy - copy # of n string in src and place it to dest
 *
 * @dest: destination of string
 * @src: string to be copied depending on # of n
 * @n: how many char to copy
 *
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
