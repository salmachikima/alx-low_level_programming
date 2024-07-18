#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s if one of the bytes in accept
 * NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int r;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		r = 0;
		while (accept[r] != '\0')
		{
			if (accept[r] == s[i])
			{
				p = &s[i];
				return (p);
			}
			r++;
		}
		i++;
	}

	return (0);
}
