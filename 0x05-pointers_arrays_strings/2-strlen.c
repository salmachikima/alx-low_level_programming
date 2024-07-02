#include "main.h"

/**
 * _strlen - function that return the lenght of a string
 * @s: its a string
 * Return: the lenght
 */

int _strlen(char *s)
{
	int i = 0;
	int r = 0;

	while (s[i] != '\0')
	{
		i++;
		r++;
	}
	return (r);
}
