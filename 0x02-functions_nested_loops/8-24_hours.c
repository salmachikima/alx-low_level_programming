#include "main.h"

/**
 * jack_bauer - function that print every minute of the day of jack bauer
 *
 *Return: void
 **/

void jack_bauer(void)
{
	int i;
	int s;

	for (i = 0 ; i < 24 ; i++)
	{
		for (s = 0 ; s < 60 ; s++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
	}
}
