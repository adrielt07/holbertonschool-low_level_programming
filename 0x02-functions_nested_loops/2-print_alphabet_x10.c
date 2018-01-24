#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 */
void print_alphabet_x10(void)
{
	int n;
	int i;
	for (i = 0; i < 10; i++) 
	{
        for (n = 'a'; n <= 'z'; n++)
        {
                _putchar(n);
        }
        _putchar('\n');
	}
}
