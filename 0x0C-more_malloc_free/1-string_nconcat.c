#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatinate or link 2 strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: concratinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1lenght = 0;
	unsigned int s2lenght = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1lenght++;
	for (i = 0; s2[i] != '\0'; i++)
		s2lenght++;

	s = malloc(sizeof(char) * (s1lenght + n) + 1);
	if (s == NULL)
		return (NULL);
	if (n >= s2lenght)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			s[s1lenght + i] = s2[i];
		s[s1lenght + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (i = 0; i < n; i++)
			s[s1lenght + i] = s2[i];
		s[s1lenght + i] = '\0';
	}
	return (s);
}
