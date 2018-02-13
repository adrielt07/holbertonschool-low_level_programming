#include "stdio.h"
#include "stdlib.h"

/**
 * main - counts how many change can be made for passed argument
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	int c = 0;

	if (n < 0)
	{
		printf ("0\n");
	}

	else if (argc == 2)
	{
		while (n >= 25)
		{
			c++;
			n -= 25;
		}
		while (n >= 10)
		{
			c++;
			n -= 10;
		}
		while (n >= 5)
		{
			c++;
			n -= 5;
		}
		while (n >= 2)
		{
			c++;
			n -= 2;
		}
		while (n >= 1)
		{
			c++;
			n -= 1;
		}
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
}
