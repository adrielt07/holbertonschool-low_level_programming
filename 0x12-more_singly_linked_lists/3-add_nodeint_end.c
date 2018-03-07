#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: reference structure
 * @n: value for new node
 * Return: value of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current = *head;

	if (current == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		return (new);
	}
}
