#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: take the name
 * @f: pointer to function with one arg char *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
