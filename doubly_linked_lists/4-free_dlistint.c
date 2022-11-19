#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: a pointer to dlistint_t
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->prev;
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
