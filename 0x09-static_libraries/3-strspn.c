#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int r;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; accept[r] != s[i]; r++)
		{
			if (accept[r] == '\0')
				return (i);
		}
	}
	return (i);
}
