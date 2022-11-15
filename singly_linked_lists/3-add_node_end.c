#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list
 * @head: a pointer to a pointer points to list_t
 * @str: a pointer to const char, points tofirst character in the string
 *
 * Return: the address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *p;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}

