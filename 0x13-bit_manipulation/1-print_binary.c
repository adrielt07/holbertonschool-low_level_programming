#include "holberton.h"

/**
 * print_binary - prints the binary value
 * @n: take an int
 */

void print_binary(unsigned long int n)
{

	if (n != NULL)
	{
		while (n > 1)
		{
			if (n % 2 == 0)
				putchar('0');
			else
				putchar('1');
			n /= 2;
		}
		if (n == 1)
			putchar ('1');
		else
			putchar ('0');
	}
}
