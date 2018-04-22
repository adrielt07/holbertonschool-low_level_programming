#include "stdlib.h"
#include "stdio.h"
#include "holberton.h"

/**
 * array_range - create an array of integers (min to max)
 * @min: lowest interger
 * @max: highest interger
 * Return: Null if min > max or Malloc fail. Else return p
 */

int *array_range(int min, int max)
{
	int *p;
	int c;
	int t;
	int size = 0;
	if (min > max)
		return (NULL);

	size = sizeof(int) * (t + 1);
	p = malloc(sizeof(int) * t);
	printf("%d\n", size);
	if (p == NULL)
		return (NULL);

	for (c = 0; min <= max; min++, c++)
	{
		p[c] = min;
	}
	return (p);
}
