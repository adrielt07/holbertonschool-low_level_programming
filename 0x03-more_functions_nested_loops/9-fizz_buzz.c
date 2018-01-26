#include "stdio.h"

/**
 * main - replace multiples of 3 and 5
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int j;
	int k;

	for (n = 1; n <= 100; n++)
	{
		j = n % 3;
		k = n % 5;

		if (j == 0 && k == 0)
		{
			printf("FizzBuzz ");
		}
		else if (j == 0)
		{
			printf("Fizz ");
		}
		else if (k == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", n);
		}
	}
	putchar('\n');
	return (0);

}
