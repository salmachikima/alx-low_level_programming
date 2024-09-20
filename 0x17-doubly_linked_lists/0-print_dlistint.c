#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint list
 * @h: pointer to the start of the linked list
 * Return: nodes number
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
