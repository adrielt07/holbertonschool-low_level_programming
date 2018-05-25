#include "sort.h"
#include "stdio.h"

/**
 * helper - swaps value in linked list
 * current->n < current->prev->n
 */

void helper(listint_t **ptr, listint_t **list)
{
	listint_t *current, *prv;

	current = *ptr;
	while(1)
	{
		if ((*ptr)->n > (*ptr)->prev->n || (*ptr)->prev == NULL)
			break;
		else
		{
			prv = (*ptr)->prev;
			(*ptr)->prev = prv->prev;
			if ((*ptr)->prev != NULL)
				((*ptr)->prev->next) = *ptr;
			prv->next = (*ptr)->next;
			if (prv->next != NULL)
				prv->next->prev = prv;
			(*ptr)->next = prv;
			prv->prev = *ptr;
		}
		current = current->prev;
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

	while(runner->next != NULL)
	{
		runner = runner->next;
		if (runner->n < runner->prev->n)
			helper(&runner, &(*list));
	}
}
