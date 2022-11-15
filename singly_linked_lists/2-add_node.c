#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: a pointer points to a pointer list_t
 * @str: a pointer to const char, points to first character in the string
 * Return: the address of new element, or NULL if failed
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
