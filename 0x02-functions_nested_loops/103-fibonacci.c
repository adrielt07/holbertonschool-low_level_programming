#include "stdio.h"

/**
 * main - adds all fibonacal numbers that are even
 * and less than 4 mil
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int sum;
	unsigned long int total;

	b = 0;
	c = 1;
	sum = 1;
	total = 0;

	for (a = 0; a < 50; a++)
	{
		sum = b + c;
		b = c;
		c = sum;

		if (sum <= 4000000 && sum % 2 == 0)
		{
			total = sum + total;
		}
	}
	printf("%lu", total);
	printf("\n");
	return (0);
}
