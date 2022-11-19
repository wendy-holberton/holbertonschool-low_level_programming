#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - list the number of elements
 * @h: a pointer to const dlistint_t
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num = num + 1;
	}
	return (num);
}
