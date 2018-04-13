#include "lists.h"

/**
 * print_dlistint - prints elements of each node
 * @h: node
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
