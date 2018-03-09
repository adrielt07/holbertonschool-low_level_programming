#include "holberton.h"

/**
 * print_binary - prints the binary value
 * @n: take an int
 */

void print_binary(unsigned long int n)
{

	int count = 0;
	unsigned long int check;
	unsigned long int copy_n = n;

	if (n == 0)
		_putchar('0');

	while (copy_n > 0)
	{
		copy_n >>= 1;
		count++;
	}
	count--;

	while (count >= 0)
	{
		check = n >> count;
		if (check & 1)
			_putchar('1');
		else
			_putchar('0');
		count--;
	}
}
