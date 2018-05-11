#include "hash_tables.h"

/**
 * key_index - gives an index of a key
 * @key: pointer to key
 * @size: size of the array of the hash table
 * Return: the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	return (hash_value % size);
}
