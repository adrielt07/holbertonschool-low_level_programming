#include "function_pointers.h"
#include "stdlib.h"
/**
 * print_name - prints name
 * @name: take the name
 * @f: pointer to function with one arg char *
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
