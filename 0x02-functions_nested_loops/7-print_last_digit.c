#include "main.h"

/**
 * print_last_digit - to print the last digit
 *@i: function parameter
 *Return: only s
 **/
int print_last_digit(int i)
{
	int s;

	s = i % 10;
	if (i < 0)
		s = -s;
	_putchar(s + '0');
	return (s);
}
