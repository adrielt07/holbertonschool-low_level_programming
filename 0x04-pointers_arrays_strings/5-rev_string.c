#include "holberton.h"
#include "stdlib.h"

/**
 * rev_string - prints string in reverse
 * @s: takes string to be reversed
 */

void rev_string(char *s)
{
	int n = 0, i = 0, j = 0;
	char *tmp;

	while (s[n] != '\0')
	{
		n++;
	}

	tmp = malloc(n * sizeof(char) + 1);
	if (tmp == NULL)
	{
		return;
	}

	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	i--;

	while (i >= 0)
	{
		s[j] = tmp[i];
		i--;
		j++;
	}
	s[n++] = '\0';
}
