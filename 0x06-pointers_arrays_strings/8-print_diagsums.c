#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums - sum up all digits in diagonal
 * @a: pointer of intergers
 * @size: size of array
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int start = size * size - 1;
	int size_copy = size - 1;;
	int i = size_copy;

	while (start >= 0)
	{
		sum1 = a[start] + sum1;
		start = start - (size + 1);
	}

	while (size > 0)
	{
		sum2 = sum2 + a[size_copy];
		size_copy = size_copy + i;
		size--;
	}

	printf("%d, %d\n", sum1, sum2);
}
