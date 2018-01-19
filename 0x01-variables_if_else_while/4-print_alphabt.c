#include <stdio.h>
/**
 * main - prints alphabet a - z without q and e
 * Return: 0 is successful
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
