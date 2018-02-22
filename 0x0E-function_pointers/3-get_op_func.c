#include "stdlib.h"
#include "3-calc.h"
#include "string.h"
#include "stdio.h"

/**
 *
 */

int (*get_op_func(char *s))(int, int)
{
	int c;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (c = 0; c <= 6; c++)
	{

		if(ops[c].op == NULL)
		{
			printf("Error\n");
			break;
		}

		if (strcmp(ops[c].op, s) == 0)
		{
			return (ops[c].f);
		}
	}
	exit (99);
}
