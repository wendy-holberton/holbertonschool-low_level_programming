#include <stdio.h>
#include "lists.h"

/**
 * list_len - length of the list
 * @h: a pointer to const list_t, point to the first element of the list
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}
