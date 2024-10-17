#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int s;
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	for (s = 0; s < ht->size; s++)
	{
		if (ht->array[s] != NULL)
		{
			node = ht->array[s];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
