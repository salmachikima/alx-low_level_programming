#include "main.h"

/**
 * print_most_numbers - fucntion that prints most numbers
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int s;

	for (s = 0 ; s <= 9 ; s++)
		if (s != 2 && s != 4)
			_putchar(s + '0');
	_putchar('\n');
}
