#include "main.h"

/**
 * _strcpy - function that copy the string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0 ; src[s] != '\0' ; s++)
		dest[s] = src[s];
	dest[s] = '\0';
	return (dest);
}
