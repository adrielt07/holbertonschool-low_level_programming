#include "lists.h"

/**
 * print_listint - prints interger
 * @h: reference structure in header file
 * Return: return element count
 */

size_t print_listint(const listint_t *h)
{

	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
