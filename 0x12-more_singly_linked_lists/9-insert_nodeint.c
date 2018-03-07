#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given position
 * @head: new node
 * @idx: position
 * @n: value of new node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int idx_compare = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;

	if (current == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = current;
		return (new);
	}

	else
	{
		while (current != NULL)
		{
			if (idx_compare == idx)
			{
				new->n = n;
				new->next = current->next;
				current->next = new;
				return (new);
			}
			idx_compare++;
			current = current->next;
		}
	}
	free (new);
	return (NULL);
}
