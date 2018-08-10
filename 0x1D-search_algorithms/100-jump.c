#include "search_algos.h"
#include <math.h>

/**
 * _linear_search - uses linear search to find value inside the array
 * @array: pointer to an array
 * @beg: the first index to search
 * @end: the last index to search
 * @value: value to look for inside the array
 * Return: return index of found value, else -1 if value is not found
 */
int _linear_search(int *array, size_t beg, size_t end, int value)
{
	if (array == NULL)
		return (-1);
	for (; beg <= end; beg++)
	{
		printf("Value checked array[%lu] = [%d]\n", beg,
		       array[beg]);
		if (array[beg] == value)
			return (beg);
	}
	return (-1);
}

/**
 * jump_search - uses jump search algorithm to find value
 * @array: pointer at the beginning of the array
 * @size: number of elements in the array
 * @value: value to search within the array
 * Return: return index location, else -1 if not found or failed
 */
int jump_search(int *array, size_t size, int value)
{
	size_t space, prev_idx, increment;

	if (array == NULL || size == 0)
		return (-1);

	space = sqrt(size);
	increment = space;
	prev_idx = 0;

	printf("Value checked array[%lu] = [%d]\n", prev_idx,
	       array[prev_idx]);
	while (space <= size)
	{
		if (value <= array[space] && value >= array[prev_idx])
			break;
		printf("Value checked array[%lu] = [%d]\n", space,
		       array[space]);
		prev_idx = space;
		space += increment;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev_idx, space);

	if (size < space)
		space = size - 1;
	return (_linear_search(array, prev_idx, space, value));
}
