#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 * @sukuna: root
 * Return: int
 */

int square(int n, int sukuna);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - recurses to find the natural square root of a number
 * @n: number to calculate
 * @sukuna: square root value
 *
 * Return: int
 */

int square(int n, int sukuna)
{
	if (sukuna * sukuna == n)
		return (sukuna);
	else if (sukuna * sukuna < n)
		return (square(n, sukuna + 1));
	else
		return (-1);
}
