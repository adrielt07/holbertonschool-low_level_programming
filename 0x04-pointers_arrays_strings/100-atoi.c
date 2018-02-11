#include "holberton.h"

/**
 *
 */

int _atoi(char *s)
{
	int n;
	int temp = 0;
	int x;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= '0' && s[n] <= '9')
		{
			temp = (temp * 10) + (s[n] - '0');
		}
		if (s[n] == '-')
		{
			x++;
		}
	}
	if (x % 2 == 1)
	{
		temp = temp * -1;
	}
	return (temp);
}
