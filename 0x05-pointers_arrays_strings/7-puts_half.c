#include "main.h"

/**
 * puts_half - prints the last half of the string
 * @str: a string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int r;
	int s;
	int k = 0;

	for (r = 0 ; str[r] != '\0' ; r++)
		k++;
	s = (k - 1) / 2;
	for (r = s + 1 ; str[r] != '\0' ; r++)
		_putchar(str[r]);
	_putchar('\n');
}
