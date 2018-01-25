#include "stdio.h"

/**
 * main - list fibonical numbers up to 50
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int sum;

	b = 0;
	c = 1;
	sum = 1;

	for (a = 0; a < 50; a++)
	{
		sum = b + c;
		b = c;
		c = sum;
		printf("%lu", sum);
		if (a < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
