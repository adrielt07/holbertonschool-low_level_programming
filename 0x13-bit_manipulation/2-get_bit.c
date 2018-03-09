#include "holberton.h"

/**
 * get_bit - get binary in index position
 * @n: unsigned long int
 * @index: position in n
 * Return: 1 if bin is 1, else 0
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
