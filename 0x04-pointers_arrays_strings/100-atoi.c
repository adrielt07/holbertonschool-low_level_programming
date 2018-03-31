#include "holberton.h"

/**
 * _atoi - convert char to int
 * @s: takes string of numbers
 * Return: an interger
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	unsigned int temp = 0;
	int x = 0;

	while (s[n])
	{
		if (s[n] == '-')
		{
			x++;
			if (s[n + 1] >= '0' && s[n + 1] <= '9')
				break;
		}
		n++;
	}

	n = 0;
	while (s[n])
	{
		if (s[n] >= '0' && s[n] <= '9')
		{
			temp = (temp * 10) + (s[n] - '0');
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
		}
		n++;
	}
	if (x % 2 == 1)
	{
		temp = temp * -1;
	}
	return (temp);
}
