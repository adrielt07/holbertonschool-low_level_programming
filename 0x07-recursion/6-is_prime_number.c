#include "holberton.h"

/**
 * helper_prime - helps to find if n is prime
 * @n: to be checked if prime
 * @i: checker that determines if n is prime
 * Return: 1 if prime, else 0
 */
int helper_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (i * i == n)
		return (0);
	return (helper_prime(n, i + 1));
}

/**
 * is_prime_number - checks if number is a prime numer
 * @n: takes an interger
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (helper_prime(n, 2));
}
