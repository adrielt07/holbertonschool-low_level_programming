#include "stdio.h"

/**
 * main - prints arguments per line
 * @argc: argument count
 * @argv: argument ventor
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
