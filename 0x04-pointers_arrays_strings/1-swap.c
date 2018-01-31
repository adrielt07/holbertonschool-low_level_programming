#include "holberton.h"

/**
 * swap_int - swap two intergers
 *
 * @a: takes 1st interger
 * @b: takes 2nd interger
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}
