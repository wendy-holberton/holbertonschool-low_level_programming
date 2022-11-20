#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all data in a list
 * @head: a pointer to listint_t
 * Return: sum or 0 if its an empty list
 */
int sum_listint(listint_t *head)
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
