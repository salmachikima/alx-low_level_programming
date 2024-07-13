#include "main.h"

/**
 * _islower - a function that indicate the lower case char
 *@c: is a parameter check it
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
