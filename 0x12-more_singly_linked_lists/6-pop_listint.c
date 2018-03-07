#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: address of head
 * Return: value of head
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;

	if (head == NULL)
		return (n);

	current = *head;

	if (current == NULL)
		return (n);

	if (current != NULL)
	{
		current = current->next;
		n = current->n;
	}
	return (n);
}
