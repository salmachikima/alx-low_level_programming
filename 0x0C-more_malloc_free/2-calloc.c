#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of array number
 * @size: size of the array
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *o;

	if (nmemb == 0 || size == 0)
		return (NULL);
	o = calloc(nmemb, size);
	if (o == NULL)
		return (NULL);
	else
		return (o);
}
