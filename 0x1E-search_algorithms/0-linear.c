#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - fonction that search for a value
 * using the linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int s;

	if (array == NULL)
		return (-1);

	for (s = 0; s < (int)size; s++)
	{
		printf("Value checked array[%u] = [%d]\n", s, array[s]);
		if (value == array[s])
			return (s);
	}
	return (-1);
}
