#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @n: the number of elements to swap
 * @a: an array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, s, r;

	for (i = 0, s = (n - 1); i < s; i++, s--)
	{
		r = a[i];
		a[i] = a[s];
		a[s] = r;
	}
}
