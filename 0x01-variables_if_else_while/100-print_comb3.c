#include <stdio.h>
/**
 * main - print 00 - 99
 * Return: 0 if successful
 */

int main(void)
{
	int n = '0';
	int i = '0';
	int start = 0;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if  (n < i)
			{
				if (start == 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(n);
				putchar(i);
				start = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
