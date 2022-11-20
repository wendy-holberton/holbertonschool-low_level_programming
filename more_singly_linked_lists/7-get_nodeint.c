#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of list
 * @head: a pointer to listint_t
 * @index: index of list
 * Return: return the nth node, or NULL if no nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

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

