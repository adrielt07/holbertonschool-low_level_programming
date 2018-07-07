#include "holberton.h"

/**
 * print_last_digit - print and return the ones place digit of a number
 * @n: takes an int
 * Return: Return the ones place
 */
int print_last_digit(int n)
{
	int r = 0;

	r = n % 10;
	if (r < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}
