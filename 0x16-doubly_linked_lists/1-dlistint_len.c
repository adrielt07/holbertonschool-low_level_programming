#include "lists.h"

/**
 * dlistint_len - number of elements in linked list
 * @h: pointer to first node
 * Return: returns number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while(h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
