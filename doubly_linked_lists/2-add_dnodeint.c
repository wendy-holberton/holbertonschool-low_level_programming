#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint - add a new node at the beginning of the list
 * @head: a pointer to pointer, points to dlistint_t
 * @n: value of new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
