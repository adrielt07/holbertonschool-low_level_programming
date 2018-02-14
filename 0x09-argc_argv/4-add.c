#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

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
	int sum;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if(!(isdigit(argv[n][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
