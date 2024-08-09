#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: unsigned long int
 * @index: The index
 * Return: 1 if yes or -1 no
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
