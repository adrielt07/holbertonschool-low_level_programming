#include "stdio.h"

/**
 * main - gets the largest prime factor of the variable n
 * Return: 0 if successful
 */

int main(void)
{

	unsigned long int n = 612852475143;
	unsigned long int j;

	for (j = 2; j <= n;)
	{
		if (n % j == 0)
		{
			n = n / j;
		}
		else if (n % j != 0)
			j++;
	}
	printf("%lu\n", j);
	return (0);
}
