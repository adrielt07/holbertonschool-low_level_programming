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
	int i;
	char *no = " ,;.!?\"(){}\t\n";

	for (n = 0; p[n] != '\0'; n++)
	{
		for (i = 0; no[i] != '\0'; i++)
		{
			if (p[n - 1] == no[i] && (p[n] >= 'a' && p[n] <= 'z'))
			{
				p[n] = p[n] - 32;
			}
		}
	}
	return (p);
}
