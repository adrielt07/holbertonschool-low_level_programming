#include "lists.h"

/**
 * delete_nodeint_at_index - free certain node
 * @head: current node
 * @index: node to delete
 * Return: 1 if successful else 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *delete;
	unsigned int index_compare = 1;
	unsigned int check;

	current = *head;
	check = listint_len(*head);
	if (index + 1 > check)
		return (-1);

	if (current != NULL && head != NULL)
	{
		while (current != NULL)
		{
			if (index == 0)
			{
				*head = current->next;
				delete = current;
				current = current->next;
				free(delete);
				return (1);
			}

			if (index_compare == index - 1)
			{
				delete = current->next;
				current->next = delete->next;
				free(delete);
				return (1);
			}
			index_compare++;
			current = current->next;
		}
	}
	return (-1);
}
