#include "main.h"

/**
 * print_line - function to print a line
 * @n: number of time the '_' will be printed
 * Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int s;

		for (s = 1 ; s <= n ; s++)
			_putchar('_');
		_putchar('\n');
	}
}
