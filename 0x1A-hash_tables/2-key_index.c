#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: The key to get the index of
 * @size: size of the array
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
