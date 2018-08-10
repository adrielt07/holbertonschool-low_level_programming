#include "search_algos.h"

/**
 * binary_recursion - helper function to help search for value using recursion
 * @array: pointer to an array
 * @beg: starting point for array
 * @size: end point of the array
 * @value: value to search for
 * Return: index of when value is else -1
 */

int binary_recursion(int *array, size_t beg, size_t size, int value)
{
	size_t n, mid, range;

	if (beg == size)
		return (-1);
	n = beg;
	printf("Searching in array: ");
	while (n < size)
	{
		printf("%d", array[n]);
		if (n != size - 1)
			printf(", ");
		n++;
	}
	printf("\n");

	range = size - beg - 1;
	mid = range / 2 + beg;
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
		return (binary_recursion(array, 0, size, value));

}
