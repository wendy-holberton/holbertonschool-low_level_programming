#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: a pointer to const listint_t, points to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num = num + 1;
	}
	return (num);
}
