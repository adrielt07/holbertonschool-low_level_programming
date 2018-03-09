#include "holberton.h"

/**
 * flip_bits - number of flips needed
 * @n: to compare with m in binary
 * @m: to compare with n in binary
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int count = 0;
	int result = 0;
	unsigned long int compare = n ^ m;

	while (n > 1)
	{
		n >>= 1;
		count++;
	}

	while (count >= 0)
	{
		if (((compare >> count) & 1) == 1)
			result++;
		count--;
	}
	return (result);
}
