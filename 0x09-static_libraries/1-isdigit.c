#include "main.h"

/**
 * _isdigit - checks the digit
 *@c: function parameter
 *Return: 1 if digit 0 if others
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
