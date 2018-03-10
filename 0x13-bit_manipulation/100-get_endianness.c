#include "holberton.h"

/**
 *
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *s = (char*)&n;

	if (*s)
		return (1);
	else
		return (0);
}
