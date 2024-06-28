#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int s;
	int r;

	for (s = 0 ; s <= 9 ; s++)
	{
		for (r = 0 ; r <= 14 ; r++)
		{
			if (r > 9)
				_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
	}
}
