#include <stdio.h>
/**
 * main - print 00 - 99
 * Return: 0 if successful
 */

int main(void)
{
	int hun = '0';
	int tenth = '0';
	int once = '0';
	int start = 0;

	for (hun = '0'; hun <= '9'; hun++)
	{
		for (tenth = '0'; tenth <= '9'; tenth++)
		{
			for (once = '0'; once <= '9'; once++)
			{
				if  (tenth < once && hun < tenth)
				{
					if (start == 1)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(hun);
					putchar(tenth);
					putchar(once);
					start = 1;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
