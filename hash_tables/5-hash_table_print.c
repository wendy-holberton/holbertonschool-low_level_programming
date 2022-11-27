#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *curr;

	if (ht == NULL)
	{
		return;
	}

	index = 0;
	while (index < ht->size)
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			printf("%s: %s, ", curr->key, curr->value);
			curr = curr->next;
		}
		index = index + 1;
	}
}
