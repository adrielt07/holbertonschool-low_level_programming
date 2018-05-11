#include "hash_tables.h"

/**
 * hash_table_print - prints the content of hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n = 0;
	int sep = 0;
	hash_node_t *ptr;

	printf("{");
	while(n < ht->size)
	{
		ptr = &(*ht->array[n]);
		while(ptr != NULL)
		{
			if (sep == 1)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			sep = 1;
		}
		n++;
	}
	printf("}\n");

/**
	printf("{");
	while(n < ht->size)
	{
		while(ht->array[n] != NULL)
		{
			if (sep == 1)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", (ht->array[n])->key, (ht->array[n])->value);
			ht->array[n] = (ht->array[n])->next;
			sep = 1;
		}
		n++;
	}
	printf("}\n");
**/
}
