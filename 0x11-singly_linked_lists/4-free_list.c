#include "lists.h"
#include "stdlib.h"

/**
 * free_list - free list_t
 * @head: struct to be freed
 */

void free_list(list_t *head)
{

	if (head != NULL)
	{
		free(head->next);
		free(head->str);
		free(head);
	}
}
