#include "hash_tables.h"

/**
 * hash_djb2 - its a Hash function implementing the djb2 algorithm
 * @str: The string to hash
 *
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int s;

	h = 5381;
	while ((s = *str++))
		h = ((h << 5) + h) + s;

	return (h);
}
