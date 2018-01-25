#include <stdio.h>

/**
 * main - adds all multiples of 3 and 5 below 1024
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int j;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			j = n + j;
	}
	printf("%d\n", j);
	return (0);
}
