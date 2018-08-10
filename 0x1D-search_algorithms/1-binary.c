#include "search_algos.h"


int binary_recursion(int *array, size_t beg, size_t size, int value)
{
	size_t n, mid;

	mid = (size - beg) / 2 + beg;
	n = beg;

	if (beg >= size)
		return (-1);
	printf("Searching array: ");
	while (n < size - 1)
	{
		printf("%d", array[n]);
		if (n != size - 2)
			printf(", ");
		n++;
	}
	printf("\n");
	if (value == array[mid])
		return (mid);

	if (value > array[mid])
		return (binary_recursion(array, mid + 1, size, value));
	else
		return (binary_recursion(array, beg, mid, value));
}

/**
 * binary_search - uses binary search algorithm to find value in sorted array
 * @array: pointer to the a sorted array
 * @size: number of elements
 * @value: Value to look for inside the array
 * Return: Index of where he value is in the array, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	else
		binary_recursion(array, 0, size, value);
	return(-1);
}
