#include "holberton.h"

/**
 * is_prime_number - checks if number is a prime numer
 * @n: takes an interger
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (is_prime_number(n * -1));
	}

	if (n == 1)
	{
		return (0);
	}
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 9 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
