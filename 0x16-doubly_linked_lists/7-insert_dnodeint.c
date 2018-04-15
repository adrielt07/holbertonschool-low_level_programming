#include "lists.h"

/**
 * dlistint_len - number of elements in linked list
 * @h: pointer to first node
 * Return: returns number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * insert_dnodeint_at_index - insert new node at certain idx
 * @h: pointer to new node
 * @idx: index to insert
 * @n: value of new node
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *front, *end;
	unsigned int i = 0;

	if (idx > dlistint_len(*h) - 1)
		return (NULL);

	front = *h; end = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		free(new);
		add_dnodeint(&*h, n);
		return (*h);
	}

	while (end != NULL)
	{
		if (i == idx)
		{
			front = end->prev;
			break;
		}
		end = end->next;
		i++;
	}
	if (end->next == NULL)
	{
		free(new);
		add_dnodeint_end(&*h, n);
		return (*h);
	}
	new->prev = front;
	new->next = end;
	front->next = new;
	end->prev = new;
	return (new);
}
