#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: a pointer to listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *real_head;
	listint_t *ptr;	

	real_head = *head;

	while (real_head != NULL)
	{
		ptr = (real_head)->next;
		free(real_head);
		real_head = ptr;
	}
	head = NULL;
}
