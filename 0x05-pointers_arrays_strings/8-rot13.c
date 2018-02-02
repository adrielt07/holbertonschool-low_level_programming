#include "holberton.h"

/**
 * *rot13 - replace char to rot 13
 * @p: takes string
 * Return: value of p
 */

char *rot13(char *p)

{
	int n;
	int j;
	char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxy";

	for (n = 0; p[n] != '\0'; n++)
	{
		for (j = 0; i[j] != '\0'; j++)
		{
			if ((p[n] >= 'a' && p[n] <= 'm') || (p[n] >= 'A' && p[n] <= 'M'))
			{
				p[n] = p[n] + 13;
			}
			else if ((p[n] >= 'n' && p[n] <= 'z') || (p[n] >= 'N' && p[n] <= 'Z'))
			{
				p[n] = p[n] - 13;
			}
		}
	}
	return (p);
}
