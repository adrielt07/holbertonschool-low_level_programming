#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int ld = n % 10;

	if (ld == 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", ld);
		printf("and is 0\n");
	}
	else if (ld > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", ld);
		printf("and is greater than 5\n");
	}
	else
	{
		printf("Last digit of %d ", n);
		printf("is %d ", ld);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
