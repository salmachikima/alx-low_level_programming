#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * binary_search - searches for a value in a sorted array
  * of integers using the Binary search algorithm
  * @array: pointer to the 1st element of the array
  * @size: number of elemts in the array
  * @value: value
  *
  * Return: value null or not present -1 else the index
  */
int binary_search(int *array, size_t size, int value)
{
	size_t s, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (s = left; s < right; s++)
			printf("%d, ", array[s]);
		printf("%d\n", array[s]);

		s = left + (right - left) / 2;
		if (array[s] == value)
			return (s);
		if (array[s] > value)
			right = s - 1;
		else
			left = s + 1;
	}

	return (-1);
}
