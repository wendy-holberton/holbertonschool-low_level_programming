#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - get the nth node of a list
 * @head: a pointer to dlistint_t
 * @index: the number of node
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	count = 0;
	current = head;
	while (current != NULL)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count = count + 1;
	}
	return (current);
}
