#include "stdio.h"
#include "holberton.h"

/**
 * print_array - value of each arrays separated by comme and space
 *
 * @a: takes in array
 * @n: takes element of array
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j <= n; j++)
	{
		printf("%d", a[j]);
		if (j < n)
		printf(", ");
	}

	printf("\n");
}
