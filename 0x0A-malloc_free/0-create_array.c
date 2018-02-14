#include "holberton.h"
#include "stdlib.h"

/**
 * create_array - print address of c
 * @size: number of c to be printed
 * @c: what character to print
 * Return: Null of size = 0, else return value of c_ptr
 */

char *create_array(unsigned int size, char c)
{
	char *c_ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		c_ptr = malloc(sizeof(c) * size);
	}

	while (i < size)
	{
		c_ptr[i] = c;
		i++;
	}
	return (c_ptr);
}
