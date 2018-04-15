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
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to first node
 * @index: nth of node
 * Return: Node, else return NULL if index is out of range
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, n;

	n = dlistint_len(head) - 1;

	if (index > n)
		return (NULL);

	else
	{
		while (i < index)
		{
			head = head->next;
			i++;
		}
	}
	return (head);
}
