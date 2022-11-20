#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: a pointer to pointer, pointing to listint_t
 * Return: the head node's data, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;

	if ((*head)->next == NULL)
	{
		return (-1);
	}
	delete = *head;
	*head = (*head)->next;
	free(delete);
	return (0);
}
