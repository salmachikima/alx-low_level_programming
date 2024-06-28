#include "main.h"

/**
 * print_diagonal - function that prints a diagonal line
 * @n: number or backslash will be printed
 * Return: always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int s;
		int r;

		for (s = 0 ; s < n ; s++)
		{
			for (r = 0 ; r <= s ; r++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
