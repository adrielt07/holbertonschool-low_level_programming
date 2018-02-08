#include "holberton.h"

/**
 * _pow_recursion - calculate power of int x
 * @x: number to multiply by itself depending on number of y
 * @y: number of times to multiply
 * Return: -1 if y < 0; return 1 if y = 0; else return power number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
