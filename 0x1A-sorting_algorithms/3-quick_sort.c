#include "sort.h"
#include "stdio.h"

int find_pivot(int *array, int last_index)
{
	int n = 0, value = array[last_index];

	while(n < last_index)
	{
		if (value < array[n])
			return (0);
		n++;
	}
	return (1);
}

/**
 *
 */
int *get_left(int *array, int *pivot)
{
	int n = 0;

	while(array[n])
	{
		if (*pivot < array[n])
			return (&array[n]);
		n++;
	}
	return (&(*pivot));
}

/**
 *
 */
int *get_right(int *array, int *pivot, int *address, int pivot_index)
{
	int n = pivot_index;

	while(n > 0)
	{
		if (&(*address) == &array[n])
			break;
		if (*pivot > array[n])
			return (&array[n]);
		n--;
	}
	return (&array[pivot_index]);
}

int sorted(int *array, size_t size)
{
	size_t n = 0;

	while(n < size)
	{
		if (n + 1 != size && array[n] > array[n + 1])
			return (0);
		n++;
	}
	return (1);
}

void swapper(int *left, int *right, int *array, size_t size)
{
	int temp = (*left);

	*left = (*right);
	*right = temp;
	print_array(array, size);
}

/**
 *
 */
void quick_sort(int *array, size_t size)
{
	int *pivot, last_elm = size - 1;
	int *left, *right;
	size_t n = 0;

	pivot = &array[last_elm];
	if (array == NULL || size < 2)
		return;

	while(n < size - 1)
	{
		if (sorted(array, size) == 1)
			break;

		pivot = &array[last_elm];

		left = get_left(array, pivot);
		right = get_right(array, pivot, left, last_elm);
		swapper(left, right, array, size);
		if (find_pivot(array, last_elm) == 1)
		{
			last_elm--;
		}
		n++;
	}
}
