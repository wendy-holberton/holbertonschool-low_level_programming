#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: a pointer to list_t
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
