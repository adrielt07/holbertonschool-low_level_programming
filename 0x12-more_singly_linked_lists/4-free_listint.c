#include "lists.h"

/**
 * free_listint - free list
 * @head: refer to structure
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		while(head != NULL)
		{
			free(head);
			head = head->next;
		}
	}
}
