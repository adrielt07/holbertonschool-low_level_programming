#include "lists.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * free_list - free list_t
 * @head: struct to be freed
 */

void free_list(list_t *head)
{
	list_t *runner;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		runner = head;
		head = head->next;
		free(runner->str);
		free(runner);
	}
}
