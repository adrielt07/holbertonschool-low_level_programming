#include <stdio.h>
/**
 * main - prints hexidecimal
 * Return: 0 if successful
 */

int main(void)
{
	char n = 'a';
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (n < 'g')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
