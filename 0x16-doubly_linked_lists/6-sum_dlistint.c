#include "lists.h"

/**
 * sum_dlistint - gets the sum of all data
 * @head: pointer to first node
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head)
	{
		n = n + head->n;
		head = head->next;
	}
	return (n);
}
