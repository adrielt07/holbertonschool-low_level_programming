#include "sort.h"

/**
 * helper - helps with swapping the value in the array
 * @array: pointer at the array
 * @num: starting point where to change num
 * @size: size of the array
 */

void helper(int *array, size_t num, size_t size)
{
	int temp, *save, *origin;

	origin = &array[num];
	save = &array[num];
	temp = array[num];
	while (array[num])
	{
		if (*save > array[num])
			save = &array[num];
		num++;
	}
	if (*save != temp)
	{
		*origin = (*save);
		*save = temp;
		print_array(array, size);
	}
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using Selection Sort Algorithm
 * @array: pointer to the array
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int n = 0;

	if (size < 2)
		return;

	while (n < size)
	{
		helper(array, n, size);
		n++;
	}
}
