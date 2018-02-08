#include "holberton.h"

/**
 * factorial - calculate the factorial of n
 * @n: value to be factored
 * Return: 1 if n = 0; -1 of n < 0; else return factored value
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (0 > n)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
