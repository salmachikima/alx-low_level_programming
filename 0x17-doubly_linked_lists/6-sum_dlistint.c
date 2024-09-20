#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list
 * @head: head of the list.
 * Return: sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
