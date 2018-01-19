#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - checks if the last digit is 0, greater than 5 or less than 6.
 * Return: 0 if successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n % 10 == 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", n % 10);
		printf("and is 0\n");
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", n % 10);
		printf("and is greater than 5\n");
	}
	else
	{
		printf("Last digit of %d ", n);
		printf("is %d ", n % 10);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
