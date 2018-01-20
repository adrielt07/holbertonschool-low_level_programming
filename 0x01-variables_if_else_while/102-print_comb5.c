#include <stdio.h>
/**
 * main - prints combination of two two digits
 * but 2nd digits are greater than the first
 * Return: 0 if successful
 */

int main(void)
{
int a, b, c, d;
for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
			if (b == d && a < c || c >= a && b < d)
			{a;
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if (a < '9' || b < '8' || c < '9' || d < '9')
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
}
putchar('\n');
return (0);
}
