#include "search_algos.h"

/**
 * linear_search - uses linear search to find value inside the array
 * @array: pointer to an array
 * @size: number of elemes in the array
 * @value: value to look for inside the array
 * Return: return index of found value, else -1 if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; size > index; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index,
		       array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
