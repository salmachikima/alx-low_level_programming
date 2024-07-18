#include "main.h"
/**
 * _isupper - check the upper case
 * @c: function parameter
 * Return: if upercase return 1 if not then 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
