#include "monty.h"

/**
 *
 */
char **tokenizer(char *str1)
{
	char **tokens;
	int num_tokens = 0, i = 0;

/*
  num_tokens = tok_num(string);
  printf("Number of tokens: %d\n", num_tokens);
  tokens = malloc(sizeof(char *) * num_tokens);
  if (tokens == NULL)
  return (NULL);

  tokens[i] = strtok(string, delim);
  while (tokens[i])
  {
  tokens[i] = strtok(NULL, delim);
  i++;
  }
  return (tokens);
*/
