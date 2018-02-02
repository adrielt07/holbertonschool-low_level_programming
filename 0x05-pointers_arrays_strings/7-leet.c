#include "holberton.h"

/**
 * *leet - replace aeotl with 1337 characters
 *
 * @p: takes the string
 *
 * Return: value of string
 */

char *leet(char *p)
{
	int i;
	int k;
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (p[i] == a[k])
			{
				p[i] = n[k];
			}
		}
	}
	return (p);
}
