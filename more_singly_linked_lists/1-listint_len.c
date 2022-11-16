#include <stddef.h>
#include "lists.h"

/**
 * listint_len - list length of a list
 * @h: a pointer to const listint_t, points to the first element in the list
 * Return: the numbers of elements in a list
 */
size_t listint_len(const listint_t *h)
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
