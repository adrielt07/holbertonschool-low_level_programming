#include <stdio.h>
/**
 * main - prints 1 - 9 seprated by space
 * Return: 0 if successful
 */

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
	putchar(n);
		if (n < '9')
			putchar(',');
			putchar(' ');
	n++;
	}
	putchar('\n');

	return (0);
}
