#include "sort.h"

/**
 * swap - swaps the value of two integers
 * @num1: pointer to first int
 * @num2: pointer to second int
 */
void swap(int *num1, int *num2)
{
	int temp = *num1;

	*num1 = *num2;
	*num2 = temp;
}

/**
 * partition - create two subarrays of > pivot and < pivot
 * @array: pointer to array
 * @lo: index location of wall
 * @hi: index location of pivot
 * @size: takes the size of the array
 * Return: new location of pivot
 */
int partition(int *array, int lo, int hi, int size)
{
	int n, wall = lo - 1;

	for (n = lo; n < hi; n++)
	{
		if (array[n] <= array[hi])
		{
			wall += 1;
			if (n != wall)
			{
				swap(&array[wall], &array[n]);
				print_array(array, size);
			}
		}
	}
	if (array[wall + 1] > array[hi])
	{
		swap(&array[wall + 1], &array[n]);
		print_array(array, size);
	}
	return (wall + 1);
}

/**
 * sorter - sorts the array recursively
 * @array: pointer to array
 * @lo: index location of the wall
 * @hi: index location of pivot
 * @size: size of the array
 */
void sorter(int *array, int lo, int hi, int size)
{
	int pivot = 0;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		sorter(array, lo, pivot - 1, size);
		sorter(array, pivot + 1, hi, size);
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

	if (array == NULL || size < 2)
		return;

	pivot = size - 1;
	sorter(array, 0, pivot, size);
}
