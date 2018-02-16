#include "stdlib.h"
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
	int t = max - min;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * t);

	for (c = 0; min < max; min++, c++)
	{
		p[c] = min;
	}
	return (p);
}
