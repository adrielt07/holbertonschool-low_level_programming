#include "lists.h"

/**
 * listint_len - find length of elements
 * @h: reference structure
 * Return: return # of elements
 */

size_t listint_len(const listint_t *h)
{

	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
