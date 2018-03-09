#include "holberton.h"

/**
 * set_bit - set bit at given index
 * @n: address of the binary to be edited
 * @index: what index to edit
 * Return: new value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var = 1;
	unsigned long int copy_n = *n;

	if (index > 64)
		return (-1);

	var <<= index;

	*n = copy_n | var;
	return (1);
}
