#include "holberton.h"
#include "stdlib.h"

/**
 *
 */

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
		exit(98);

	return n;
}
