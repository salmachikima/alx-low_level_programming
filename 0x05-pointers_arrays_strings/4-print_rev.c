#include "main.h"

/**
 * print_rev - function that prints reverse string
 * @s: the string
 * Return: a void
 */

void print_rev(char *s)
{
	int r;
	int k = 0;

	for (r = 0 ; s[r] != '\0' ; r++)
		k++;
	for (r = k - 1 ; r >= 0 ; r--)
		_putchar(s[r]);
	_putchar('\n');
}
