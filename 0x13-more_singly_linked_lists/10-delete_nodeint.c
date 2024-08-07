#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of a list
 * @index: index of the node to be  deleted
 * Return: 1 (success)- 1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int s;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (s = 0; s < index - 1 && prev != NULL; s++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
