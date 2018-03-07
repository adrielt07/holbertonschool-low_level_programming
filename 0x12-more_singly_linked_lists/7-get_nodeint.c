#include "lists.h"

/**
 * get_nodeint_at_index - return the value of index node
 * @head: the node
 * @index: node index to return
 * Return: value of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_compare = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index_compare == index)
		{
			return (head);
		}
		index_compare++;
		head = head->next;
	}

	return (head);
}
