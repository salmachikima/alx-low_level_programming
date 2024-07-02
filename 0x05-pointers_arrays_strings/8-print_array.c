#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints an array
 * @a: a pointer parameter
 * @n: a parameter
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int sukuna;

	for (sukuna = 0 ; sukuna < n ; sukuna++)
	{
		printf("%d", a[sukuna]);
		if (sukuna < n - 1)
			printf(", ");
	}
	printf("\n");
}
