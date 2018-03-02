#include "lists.h"

/**
 * list_len - prints number of nodes
 * @h: pointer to structure
 * Return: returns number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
