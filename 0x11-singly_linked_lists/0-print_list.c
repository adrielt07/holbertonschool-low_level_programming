#include "lists.h"

/**
 * print_list - prints list of structure
 * @h: pointer to list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t count;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", h->len, "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
