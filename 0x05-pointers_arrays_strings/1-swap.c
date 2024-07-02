#include "main.h"
/**
 *swap_int - function that swaps the value of two pointers
 *@a: a pointer one
 *@b: a pointer two
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
