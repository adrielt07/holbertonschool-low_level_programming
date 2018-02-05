#include "holberton.h"

/**
 * *_memcpy - copy value of src to dest
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of elements to copy from src
 * Return: return value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);

}
