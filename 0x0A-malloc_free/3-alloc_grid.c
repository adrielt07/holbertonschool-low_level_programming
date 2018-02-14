#include "holberton.h"
#include "stdlib.h"

/**
 *
 */

int **alloc_grid(int width, int height)
{
	int **p;

	int i;
	int n;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free (p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free (p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			p[i][n] = 0;
		}
	}
	return (p);
}
