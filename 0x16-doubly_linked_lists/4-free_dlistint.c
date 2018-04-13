#include "lists.h"

/**
 * free_dlistint - frees node
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
