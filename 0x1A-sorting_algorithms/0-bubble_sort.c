#include "sort.h"
#include "stdlib.h"

void switcher(int *array, int idx1, int idx2, size_t size)
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
 * @array - takes an array
 * @size - size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0;

	while (array[n + 1] != 0 && n < size)
	{
		if (array[n] > array[n + 1])
		{
			switcher(array, n, n+1, size);
		}
		n++;
	}
	n = 0;
	while (array[n + 1] != 0 && n < size)
	{
		if (array[n] > array[n + 1])
			bubble_sort(array, size);
		n++;
	}
}
/**
int main(void)
{
	int array[] = {5, 10, 15, 25, 20, 30, 45, 50, 26};

	size_t n = sizeof(array) / sizeof(array[0]);
	bubble_sort(array, n);
	print_array(array, n);
}
*/
