#include "monty.h"

/**
 *
 */
int main(void)
{
	char str[9] = "  push 4", **tokens;
	int len = 0;


	tokens = tokenizer(str);

	while (tokens[len])
	{
		printf("tokens[%d] is: %s\n", len, tokens[len]);
		len++;
	}
}
