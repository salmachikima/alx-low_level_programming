#include "main.h"

/**
 * print_square - function that prints the square using a #
 * @size: size of the square
 * Return: always 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int s;
		int r;

		for (s = 1 ; s <= size ; s++)
		{
			for (r = 1 ; r <= size ; r++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
