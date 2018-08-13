#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 9, 10, 10, 10
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 7, jump_search(array, size, 7));
	printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
	return (EXIT_SUCCESS);
}
