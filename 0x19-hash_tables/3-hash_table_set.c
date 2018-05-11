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
	hash_node_t *new;

	if (strlen(key) == 0 || key == NULL || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);

	index = key_index((unsigned char *) key, ht->size);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
