#include "holberton.h"
#include <stdio.h>

/**
 * int_len - gets number of digits in int
 * @num: takes an int
 * Return: number of digits
 */

int int_len(int num)
{
	int i = 0;

	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

/**
 * print_number - prints an int
 * @n: takes an int
 */
void print_number(int n)
{
	int cpy_n = n, len = 0, mod = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		cpy_n *= -1;
		_putchar('-');
	}
	len = int_len(cpy_n);
	len--;
	while (len > 0)
	{
		mod *= 10;
		len--;
	}
	while (mod > 0)
	{
		_putchar(cpy_n / mod + '0');
		cpy_n = cpy_n % mod;
		mod /= 10;
	}
}
