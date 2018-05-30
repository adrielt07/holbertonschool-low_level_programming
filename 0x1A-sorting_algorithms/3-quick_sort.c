#include "sort.h"
#include "stdio.h"

/**
 * swap - swaps the value of two integers
 * @num1: pointer to first int
 * @num2: pointer to second int
 */
void swap(int *num1, int *num2, int *array, size_t size)
{
	int temp = (*num1);

	*num1 = (*num2);
	(*num2) = temp;
	print_array(array, size);
}

int checker(int *array, int size)
{
	int n = 0;

	for (n = 1; n < size; n++)
	{
		if (array[n] < array[n - 1])
			return (0);
	}
	return (1);
}

/**
 *
 */
void sorter(int *array, int wall, int pivot, int size)
{
	int i, num = 0;

	if (pivot == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] < array[pivot])
		{
			swap(&array[i], &array[wall + num], array, size);
			num++;
		}
	}
	if (array[pivot] > array[num + 1])
		sorter(array, wall, pivot - 1, size);
	if (array[pivot] < array[num + 1])
	{
		swap(&array[num], &array[pivot], array, size);
		sorter(array, wall + num, pivot, size);
	}
}

/**
 * quick_sort - sorts an array in ascending order
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int pivot;

	if (size < 2)
		return;

	pivot = size - 1;
	sorter(array, 0, pivot, size);
}
