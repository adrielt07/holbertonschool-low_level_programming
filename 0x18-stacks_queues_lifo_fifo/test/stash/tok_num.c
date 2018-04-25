#include "monty.h"

/**
 * tok_num - calculate how many tokens in a string
 * @string: takes a string
 * Return: Number of tokens
 */
int tok_num(const char *string)
{
        int len = 0, i = 0;

	printf("Checking each char:\n");
	while(string[i] != '\0')
	{
		if (check_delim(string[i]) == 0)
		{
			printf("Not a delim - Char: %c entering a new loop\n", string[i]);
			printf("-------\n");
			while (check_delim(string[i]) == 0)
			{
				printf("\tNot a delim - char: %c\n", string[i]);
				i++;
			}
		}
		else
		{
			printf("This is a delim - Char: %c\n", string[i]);
			i++;
		}
	}

	printf("string is: %s\n", string);
	return (len);
}
