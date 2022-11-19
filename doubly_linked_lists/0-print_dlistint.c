#include <stdio.h>
#include "lists.h"


/**
 * print_dlistint - print all the elements in the list
 * @h: value of the new node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
