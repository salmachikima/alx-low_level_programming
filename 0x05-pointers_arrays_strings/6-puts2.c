#include "main.h"

/**
 * puts2 - prints the other char of a string
 * @str: string
 * Return: always 0
 */

void puts2(char *str)
{
	int s;

	for (s = 0 ; str[s] != '\0' ; s++)
	{
		if (s % 2 == 0)
			_putchar(str[s]);
	}
	_putchar('\n');
}
