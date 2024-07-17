#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function returns a pointer to a newly allocated space
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, s = 0;
	char *r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	r = malloc(sizeof(char) * (i + 1));

	if (r == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		r[s] = str[s];
	return (r);
}
