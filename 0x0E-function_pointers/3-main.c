#include "stdlib.h"
#include "3-calc.h"
#include "stdio.h"
#include "string.h"

/**
 * main - add, sub, mul, div and mod
 * @argc: argument count
 * @argv: argument ventor
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{

	if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(a, b));
}
