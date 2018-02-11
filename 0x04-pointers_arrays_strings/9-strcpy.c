#include "holberton.h"

/**
 *
 */

char *_strcpy (char *dest, char *src)
{
	int n;

	for (n = 0; src[n] <= '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
