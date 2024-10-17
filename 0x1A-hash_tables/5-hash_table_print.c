#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: A pointer for printing
 * Description: the Key/value pairs are printed in order
 *              they appear in the array
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned char comma_flag = 0;
	unsigned long int s;

	if (ht == NULL)
		return;

	printf("{");
	for (s = 0; s < ht->size; s++)
	{
		if (ht->array[s] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[s];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
