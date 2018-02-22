#include "stddef.h"
#include "function_pointers.h"

/**
 * array_iterator - prints each array and new line
 * @array: take an array
 * @size: size of an array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c = 0;

	if (array && action)
	{
		for (c = 0; c < size; c++)
		{
			action(array[i]);
		}
	}
}
