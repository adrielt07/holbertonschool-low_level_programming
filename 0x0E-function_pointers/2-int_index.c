#include "function_pointers.h"

/**
 * int_index - compare array intergers
 * @array: takes an array
 * @size: size of an array
 * @cmp: function pointer to what needs to be compared to
 * Return: An Int --- first position of element. Or -1 if error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0)
		return (-1);


	if (array && cmp)
	{
		for (c = 0; array[c] < size; c++)
		{
			if (cmp(array[c]))
				break;
		}
		return (c);
	}
	return (-1);
}
