#include "holberton.h"

/**
 * get_bit - get binary in index position
 * @n: unsigned long int
 * @index: position in n
 * Return: 1 if bin is 1, else 0
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int count = 0;
	unsigned long int copy_n = n;



	if (index == 0)
	{
		if (n & 1)
			return (1);
		return(0);
	}

	if (index > 0)
	{

		while (copy_n > 1)
		{
			copy_n >>= 1;
			count++;
		}

		if ((n >> count) & 1)
			return (1);
		else
			return (0);

	}
	return (-1);
}
