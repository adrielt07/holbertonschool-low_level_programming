#include <stdio.h>
/**
 * main - print 00 - 99
 * Result: 0 if successful
 */

int main(void)
{
	int n = '0';
	int i = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
		putchar(n);
		putchar(i);
			if (n < '9' || i < '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
