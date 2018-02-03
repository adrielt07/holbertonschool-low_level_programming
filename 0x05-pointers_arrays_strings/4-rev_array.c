#include "holberton.h"

/**
 * reverse_array - return the reverse order of the array
 * @a: takes an array
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{

	int t;
	int t2;
	int c;

	n -= 1;
	for (c = 0; c <= n; c++, n--)
	{
		t = a[c];
		t2 = a[n];
		a[n] = t;
		a[c] = t2;
	}
}
