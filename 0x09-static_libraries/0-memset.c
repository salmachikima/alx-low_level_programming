#include "main.h"

/**
 * _memset - function that add a constant byte to the memory
 * @s: memory area
 * @b: char
 * @n: the number of times to copy the b
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
