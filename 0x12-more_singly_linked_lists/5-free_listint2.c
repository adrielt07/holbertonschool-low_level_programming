#include "lists.h"

/**
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	current = *head;

	if (head == NULL)
		return;

	if (current != NULL)
	{
		while (current->next != NULL)
		{
			free(current);
			current = current->next;
		}
	}
	*head = NULL;
}
