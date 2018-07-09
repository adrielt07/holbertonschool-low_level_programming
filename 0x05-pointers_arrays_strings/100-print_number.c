#include "holberton.h"
#include <stdio.h>

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

	while (cp > 9)
	{
		len++;
		cp = cp / 10;
	}
	return (len);
}

/**
 * _pow - calculates the power of ten
 * @n: takes number of digits
 * Return: returns the highest place digit
 */
int _pow(int n)
{
	int ret = 1;

	while (n != 1)
	{
		ret *= 10;
		n--;
	}

	return (ret);
}

/**
 * print_number - print an integer using _putchar
 * @n: takes an int
 */
void print_number(int n)
{
	int len = 0, temp, cp_n = n, digit_place;

	len = help_len(n);
	digit_place = _pow(len);

	if (n < 0)
	{
		_putchar('-');
		cp_n *= -1;
	}

	while (len != 0)
	{
		temp = cp_n / digit_place;
		_putchar(temp + '0');
		cp_n = cp_n % digit_place;
		digit_place /= 10;
		len--;
	}
}
