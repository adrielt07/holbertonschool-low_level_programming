#include "sort.h"

int knuth_func(int n, size_t size)
{
	int result;

	result = n * 3 + 1;

	return (result);
}

/**
 * array_elem - takes an array and put elements in it
 * @arr: takes a pointer to the array
 * @size: how many elements should be in the array
 */
void array_elem(int *arr, int size, int elem)
{
	while(size >= 0)
	{
		size--;
		arr[size] = elem / 3;
		elem /= 3;
	}
}

/**
 * shell_sort - sorts the array using shell sort using the Knuth sequence
 * @array: pointer to an array
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	int n = 1, i, *knuth;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		if (n >= size)
			break;
		n = knuth_func(n, size);
	}
	printf("value of i %d\n", i);
	knuth = malloc(sizeof(int) * i - 1);
	if (knuth == NULL)
		return;
	array_elem(knuth, i, n);
	n = 0;
	while(knuth[n])
	{
		printf("Values in Knuth %d\n", knuth[n]);
		n++;
	}
	free(knuth);
}

int main(void)
{

	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	shell_sort(array, n);
}
