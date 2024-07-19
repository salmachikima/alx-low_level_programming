#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *s = malloc(b);

	if (s == NULL)
		exit(98);
	else
		return (s);
}
