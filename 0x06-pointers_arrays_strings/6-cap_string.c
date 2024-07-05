#include "main.h"
#include <stdio.h>

/**
 * isLower - function that see if its lowercase
 * @c: character
 * Return: 1 if true , 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determine whether ascii is a delimiter
 * @c: character
 * Return: 1 if true ,0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int fd = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fd = 1;
		else if (isLower(*s) && fd)
		{
			*s -= 32;
			fd = 0;
		}
		else
			fd = 0;
		s++;
	}
	return (ptr);
}
