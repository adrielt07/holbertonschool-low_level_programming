#include "holberton.h"

/**
 * main - call holberton header to use 
 * print_alphabet function to print
 * alphabet from a to z
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int n;
	
	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
