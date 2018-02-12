#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

/**
 * helper - checks if is digit
 * @argc: argument count
 * @argv: argument vector
 * @n: loops for number of arguments
 * @k: char for each n
 * Return: 1 if digit. 0 if not
 */

int helper(int argc, int n, int k, char **argv)
{
	for (n = 1; n < argc; n++)
	{
		for (k = 0; argv[n] != '\0' && k < strlen(argv[n]); k++)
			if (isdigit(argv[n][k]))
				return (1);
	}
	return (0);
}

/**
 * main - adds int arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful and 1 if error
 */

int main(int argc, char **argv)
{
	int n;
	int i;

	if (helper(argc, 1, 0, argv) == 0)
	{
		printf("Error\n");
		return (1);
	}

	for (n = 1; n < argc; n++)
	{
		i += atoi(argv[n]);
	}
	printf("%d\n", i);
	return (0);
}
