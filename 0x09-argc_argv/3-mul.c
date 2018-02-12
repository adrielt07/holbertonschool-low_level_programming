#include "stdio.h"
#include "stdlib.h"

/**
 * main - multiplies two intergers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error or 0 if successful
 */

int main(int argc, char **argv)
{

	int n = atoi(argv[1]);
	int i = atoi(argv[2]);

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", n * i);
	return (0);

}
