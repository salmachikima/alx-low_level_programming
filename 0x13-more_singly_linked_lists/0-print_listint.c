#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
