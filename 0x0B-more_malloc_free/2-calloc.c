#include "holberton.h"
#include "stdlib.h"

/**
 * _calloc - allocate mem of an array
 * @nmemb: number of elements array
 * @size: size of data
 * Return: NULL if arg is 0 else return value of p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	void *ret;
	unsigned int c = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	while (c < size)
	{
		p[c] = 0;
		c++;
	}
	ret = p;

	return (ret);
}
