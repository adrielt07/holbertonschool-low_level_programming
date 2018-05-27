#include "sort.h"
#include "stdio.h"

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
 * insertion_sort_list - sorts a doubly linked list of integer
 * in ascending order using the insertion sort algoritm
 * @list: takes double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *runner;

	runner = *list;

	while (runner->next != NULL)
	{
		runner = runner->next;
		if (runner->n < runner->prev->n)
			helper(&runner, &(*list));
	}
}
