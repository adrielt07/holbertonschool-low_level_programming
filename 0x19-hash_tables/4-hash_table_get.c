#include "hash_tables.h"

/**
 * hash_table_get - obtains the value of the key
 * @ht: hash table
 * @key: what key to search
 * Return: value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL)
		return (NULL);
	if (ht->array[index] == NULL)
		return (NULL);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = (ht->array[index])->next;
	}
	return (NULL);
}
