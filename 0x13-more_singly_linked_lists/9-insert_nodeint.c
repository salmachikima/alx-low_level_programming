#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of a list
 * @idx: index of the list where the new node will be added
 * @n: integer for the new node
 * Return: NULL - if it fails
 *         Otherwise - the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int s;
	listint_t *new;
	listint_t *r;

	r = *head;

	if (idx != 0)
	{
		for (s = 0; s < idx - 1 && r != NULL; s++)
		{
			r = r->next;
		}
	}

	if (r == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = r->next;
		r->next = new;
	}

	return (new);
}
