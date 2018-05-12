#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update
 * @key: the key value
 * @value: value associated with the key
 * Return: 1 if successful else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *runner;

	if (strlen(key) == 0 || key == NULL || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	runner = &(*ht->array[index]);
	while (runner)
	{
		if (strcmp(runner->key, key) == 0)
		{
			runner->value = strdup(value);
			return (1);
		}
		runner = runner->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
