#include "holberton.h"

/**
 * *cap_string - capitalize every word
 *
 * @p: takes p strings
 *
 * Return: The value of p
 */

char *cap_string(char *p)
{
	int n;
	int k;

	for (n = 0; p[n] != '\0'; n++)
	{
		if(p[n] < 'A' || p[n] > 'Z' && p[n] < 'a' || p[n] > 'z')
		{
			p[n + 1] = p[n + 1] - 32;
		}
	}
	return (p);
}
