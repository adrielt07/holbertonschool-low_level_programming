#include "holberton.h"

/**
 * rev_string - prints string in reverse
 * @s: takes string to be reversed
 */

void rev_string(char *s)
{
	int n = 0, i = 0;
	char *s_copy;

	s_copy = s;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;

	while (n >= 0)
	{
		s_copy[n] = s[i];
		n--;
		i++;
	}
	s[i++] = '\0';
}
