#include "stdlib.h"
#include "3-calc.h"
#include "string.h"
#include "stdio.h"

/**
 * get_op_func - determines operator to use
 * @s: string to compare
 * Return: Operator to use
 */

int (*get_op_func(char *s))(int, int)
{
	int c = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[c].op != NULL)
	{
		if (strcmp(ops[c].op, s) == 0)
		{
			return (ops[c].f);
		}
		c++;
	}
	printf("Error\n");
	exit(99);
}
