#include "sort.h"

/**
 * helper - swaps value in linked list
 * @ptr: pointer to node
 * @list: pointer at the beginning of the list
 */

void helper(listint_t **ptr, listint_t **list)
{
	listint_t *current, *prv;

	current = *ptr;

	while (1)
	{
		if (current->prev == NULL || current->n > current->prev->n)
			break;
		prv = current->prev;
		if (current->next != NULL)
			current->next->prev = prv;
		prv->next = current->next;
		if (prv->prev != NULL)
			prv->prev->next = current;
		current->prev = prv->prev;
		prv->prev = current;
		current->next = prv;
		if (current->prev == NULL)
			*list = current;
		print_list(*list);
	}
}

/**
 * list_size - counts how many elements in linked list
 * @list: pointer at the beginning of the linked list
 * Return: number of elements
 */
unsigned int list_size(listint_t **list)
{
	listint_t *runner = *list;
	unsigned int count = 0;

	if (list == NULL || runner->next == NULL)
		return (count);

	while (runner)
	{
		runner = runner->next;
		count++;
	}
	return (count);
}

/**
 * insertion_sort_list - sorts a doubly linked list of integer
 * in ascending order using the insertion sort algoritm
 * @list: takes double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *runner;

	if (list == NULL || *list == NULL || list_size(&(*list)) < 2)
		return;

	runner = *list;
	while (runner->next != NULL)
	{
		runner = runner->next;
		if (runner->n < runner->prev->n)
			helper(&runner, &(*list));
	}
}
