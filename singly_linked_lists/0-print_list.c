#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer points to const list_t *
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;
	const list_t *curr;

	curr = h;
	num = 0;
	while (curr != NULL)
	{
		if (curr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", curr->len, curr->str);
		}
		num = num + 1;
		curr = curr->next;
	}
	return (num);
}
