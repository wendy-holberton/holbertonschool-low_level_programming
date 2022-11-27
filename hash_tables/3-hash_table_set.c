#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

void insert_into_ht(hash_table_t *ht, int index, hash_node_t *new) 
{
	if (ht->array[index] != NULL)
	{
		new->next = ht->array[index];
	}	
	ht->array[index] = new;
}

/**
 * hash_table_set - add an element into the hash table
 *@ht: a pointer to hash_table_t
 *@key: the key (not empty)
 *@value: the value associated with the key
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int index;
		
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (0);
	}


	new->key = strdup(key);
	new->value = strdup(value);

	index = key_index( (const unsigned char *)key, ht->size);
	insert_into_ht(ht, index, new);
	return (1);	
}
