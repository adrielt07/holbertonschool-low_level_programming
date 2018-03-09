#include "holberton.h"

/**
 * clear_bit - change bit 1 to 0
 * @n: int to be changed
 * @index: the position to change
 * Return: new value of n
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var = 1;
	unsigned long int copy_n = *n;

	if (index > 64)
		return (-1);

	var <<= index;

	var = ~var;
	*n = copy_n & var;
	return (1);

}
