#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the data in list
 * @head: a pointer to dlistint_t
 *
 * Return: EXIT_SUCCESS, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
