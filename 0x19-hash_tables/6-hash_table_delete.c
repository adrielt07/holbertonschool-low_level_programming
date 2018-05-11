#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hast table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *tmp, *runner;

	while(n < ht->size)
	{
		runner = &(*ht->array[n]);
		while(runner != NULL)
		{
			printf("Found a hash table that is not NULL\n");
			tmp = runner;
			runner = runner->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		n++;
	}
	free(ht->array);
	free(ht);
}
