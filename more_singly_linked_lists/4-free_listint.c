#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: a pointer to listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
