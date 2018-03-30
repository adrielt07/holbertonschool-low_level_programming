#include "holberton.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: string to be copied to
 * @src: string to copy from
 * Return: return string dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, i = 0;

	while (src[n])
	{
		n++;
	}
	dest[n] = '\0';
	n--;
	while (n >= 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}

	return (dest);
}
