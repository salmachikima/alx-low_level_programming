#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @i: int
 * Return: 1 if n is a prime number, 0 if not
 */

int test_prime(int n, int i);
int is_prime_number(int n)
{
	return (test_prime(n, 2));
}

/**
 * test_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: i
 *
 * Return: int
 */

int test_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (test_prime(n, i + 1));
}
