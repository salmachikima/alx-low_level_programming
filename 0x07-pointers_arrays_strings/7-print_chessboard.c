#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int s;

	for (i = 0; i < 8; i++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[i][s]);
		}
		_putchar('\n');
	}
}
