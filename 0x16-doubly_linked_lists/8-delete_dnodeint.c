#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at certain index
 * @head: address to head
 * @index: index node
 * Return: 1 if successful, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;
	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}

	while (current->next != NULL)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}

	if (index > i)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
