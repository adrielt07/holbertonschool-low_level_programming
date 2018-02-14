#include "holberton.h"
#include "stdlib.h"

/**
 *
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	if (grid == 0 || grid == NULL)
	{
		;
	}

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
}
