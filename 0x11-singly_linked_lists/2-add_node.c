#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * _strlen - calculate the length of string
 * @s: string to be calculated
 * Return: length of string
 */

int _strlen(const char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * add_node - add node at the beginning
 * @head: new node to be created
 * @str: value of new node
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newN;

	if (head == NULL || str == NULL)
		return (NULL);

	newN = malloc(sizeof(list_t));
	if (newN == NULL)
		return (NULL);

	newN->str = strdup(str);
	newN->len = _strlen(str);
	newN->next = *head;
	*head = newN;
	return (newN);
}
