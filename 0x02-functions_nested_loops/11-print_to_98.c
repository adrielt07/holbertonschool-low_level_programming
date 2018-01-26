#include "stdio.h"

/**
 * print_to_98 - prints all values until 98
 *
 * @n: starting value
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n <= 98; n++)
		{
			printf("%d ", n);
		}
	}
	else
	{
		for (n; n >= 98; n--)
		{
			printf("%d ", n);
		}
	}
}
