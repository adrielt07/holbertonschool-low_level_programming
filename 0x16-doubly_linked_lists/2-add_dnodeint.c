#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * @head: new node
 * @n: value of new node
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
}
