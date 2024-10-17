#include "hash_tables.h"

/**
 * hash_table_set - fnctn that Add or update an element in hash table
 * @ht: pointer to the hash table
 * @key: key to add - cant be an empty str
 * @value: The value associated with key
 *
 * Return: fail 0 else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int i, s;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (s = i; ht->array[s]; s++)
	{
		if (strcmp(ht->array[s]->key, key) == 0)
		{
			free(ht->array[s]->value);
			ht->array[s]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
