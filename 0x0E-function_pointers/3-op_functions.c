#include "3-calc.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * op_add - adds a, b
 * @a: takes an int a
 * @b: takes an int b
 * Return: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract a, b
 * @a: takes an int a
 * @b: takes an int b
 * Return: the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a, b
 * @a: takes an int a
 * @b: takes an int b
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a, b
 * @a: takes an int a
 * @b: takes an int b
 * Return: the result, 100 if b = 0
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of a, b
 * @a: takes an int a
 * @b: takes an int b
 * Return: the result; 100 if b = 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
