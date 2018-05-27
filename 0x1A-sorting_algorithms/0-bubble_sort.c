#include "sort.h"

/**
 * swap - swaps the position of two integers at
 * certain index then prints it
 * @array: takes an array
 * @idx1: first index
 * @idx2: second index
 * @size: size of an array
 */

void swap(int *array, int idx1, int idx2, size_t size)
{
	int temp = 0;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
	print_array(array, size);
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using Bubble sort algorithm
 * @array: takes an array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0;

	if (size < 1)
		return;

	while (array != NULL && n < size)
	{
		if (n + 1 != size && array[n] > array[n + 1])
		{
			swap(array, n, n + 1, size);
		}
		n++;
	}
	n = 0;
	while (array != NULL && n < size)
	{
		if (n + 1 != size && array[n] > array[n + 1])
			bubble_sort(array, size);
		n++;
	}
}
