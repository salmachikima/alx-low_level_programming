#include "main.h"

/**
 * print_alphabet - function that prints lower case alphabet
 *
 * Return: always return 0
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++)
		_putchar(s);
	_putchar('\n');
}
