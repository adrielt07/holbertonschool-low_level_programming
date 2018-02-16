#include "holberton.h"
#include "stdlib.h"

/**
 * malloc_checked - allocate memory
 * @b: takes unsigned int
 * Return: mem address
 */

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
		exit (98);

	return (n);
}
