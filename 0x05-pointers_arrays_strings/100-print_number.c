#include "holberton.h"

/**
 * help_len - get number of digits
 * @n: takes an int
 * Return: returns the number of digits
 */
int help_len(int n)
{
	int len = 1, cp = n;

	if (n < 0)
		cp *= -1;

	while (cp > 10)
	{
		len++;
		cp = cp / 10;
	}
	return (len);
}

/**
 * print_number - print an integer using _putchar
 * @n: takes an int
 */
void print_number(int n)
{
	int len = 0, temp, cp_n = n;

	len = help_len(n);

	if (n < 0)
	{
		_putchar('-');
		cp_n *= -1;
	}

	while (len != 0)
	{
		temp = cp_n % 10;
		_putchar(temp + '0');
		cp_n = cp_n / 10;
		len--;
	}
}
