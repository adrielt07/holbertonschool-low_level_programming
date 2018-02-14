#include "holberton.h"

/**
 * helper - helps find square root of a number
 * @i: takes int
 * @p: takes int
 * Return: 1 if n is 1, value of i if square exist and -1 if not
 */

int helper(int i, int p)
{
	if (p == 1)
		return (1);

	if (i * i == p)
		return (i);

	if (i * i > p)
		return (-1);

	else
		return (helper(i + 1, p));
}

/**
 * _sqrt_recursion - recursion to find square root
 * @n: takes interger
 * Return: helper function
 */

int _sqrt_recursion(int n)
{
	return (helper(2, n));
}
