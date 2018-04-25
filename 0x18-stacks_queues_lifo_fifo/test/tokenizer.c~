#include "monty.h"

/**
 *
 */
char **tokenizer(char *string)
{
	char *str_tok, **tokens;
	int num_tokens = 0, i = 0;

	num_tokens = tok_num(string) + 1;
	printf("Number of tokens: %d\n", num_tokens);
	tokens = malloc(sizeof(char *) * num_tokens);
	if (tokens == NULL)
		return (NULL);
	printf("malloced done\n");
	printf("Tokenizing: %s\n", string);

	str_tok = strtok(string, delim);
	printf("Passed first token: \n");
	while (str_tok != NULL)
	{
		tokens[i] = str_tok;
		i++;
		str_tok = strtok(NULL, delim);
	}
	return (tokens);

}
