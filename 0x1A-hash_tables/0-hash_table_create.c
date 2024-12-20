#include "hash_tables.h"

/**
 * hash_table_create - fnctn that Creates a hash table
 * @size: array size
 * Return: an error NULL.
 *         elsea pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int s;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (s = 0; s < size; s++)
		ht->array[s] = NULL;

	return (ht);
}
