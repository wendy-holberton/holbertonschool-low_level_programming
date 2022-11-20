#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * insert_dnodeint_at_index - insert a new node
 * @h: a pointer to pointer, points to dlistint_t
 * @idx: index of the list
 * @n: data
 * Return: EXIT_SUCCESS, or new, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr;
	dlistint_t *new;
	dlistint_t *one_before;
	unsigned int num;

	/** create new node */
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/** find the position */
	num = 0;
	curr = *h;
	while  (num < idx)
	{
		curr = curr->next;
		num = num + 1;
	}

	/** put the new node to the position */
	one_before = curr->prev;
	one_before->next = new;
	new->prev = one_before;
	curr->prev = new;
	new->next = curr;
	return (new);
}
