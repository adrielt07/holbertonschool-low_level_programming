#include "holberton.h"

/**
 * helper - helps find square root of a number
 * @i: takes int
 * @n: takes int
 * Return: 1 if n is 1, value of i if square exist and -1 if not
 */

int helper(int i, int n)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	else
		return (helper(i + 1, n));
}

/**
 * _sqrt_recursion - recursion to find square root
 * @n: takes interger
 * Return: helper function
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	return (helper(2, n));
}
