#include "lists.h"

/**
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
