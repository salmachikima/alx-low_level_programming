#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index
 * Return: 1 if yes -1 if no
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;
	*n = (*n | s);

	return (1);
}
