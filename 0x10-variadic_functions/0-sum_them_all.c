#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: const int
  *
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
