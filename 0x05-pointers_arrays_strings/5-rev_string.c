#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string
 * Return: always 0
 */

void rev_string(char *s)
{
	int r;
	int k = 0;

	for (r = 0 ; s[r] != '\0' ; r++)
		k++;
	for (r = 0 ; r < k / 2 ; r++)
	{
		char m;

		m = s[r];
		s[r] = s[k - 1 - r];
		s[k - 1 - r] = m;
	}
}
