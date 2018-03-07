#include "lists.h"

/**
 * sum_listint - adds listint_t data
 * @head: the node
 * Return: sum of list
 */

int sum_listint(listint_t *head)
{
	int _sum = 0;

	if (head == NULL)
		return (_sum);

	while (head != NULL)
	{
		_sum = _sum + head->n;
		head = head->next;
	}
	return (_sum);

}
