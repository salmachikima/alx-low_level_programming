#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that create an array of char
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

		if (size == 0 || s == 0)
			return (0);
	while (size--)
		s[size] = c;

	return (s);
}
