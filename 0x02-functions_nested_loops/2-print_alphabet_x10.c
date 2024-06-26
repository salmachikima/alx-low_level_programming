#include "main.h"
/**
 * print_alphabet_x10 - this fonction prints the alphabet x 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char s;
	int r;

	for (r = 0 ; r < 10; r++)
	{
		for (s = 'a' ; s <= 'z' ; s++)
			_putchar(s);
		_putchar('\n');
	}
}
