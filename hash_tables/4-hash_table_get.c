#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - get the index from  hash table
 * @ht: the hash table
 * @key: the key
 * Return: the value of the node or NULL if cannot find the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *linked_list;
	
	if (ht == NULL)
	{
		return (NULL);
	}
/* find the right spot in the hash table (element in the array) */
	index = key_index((const unsigned char *)key, ht->size);
	linked_list = ht->array[index];

/* find the right node in the linked list */
	while (linked_list != NULL)
	{
		if (strcmp(key, linked_list->key) == 0)
		{
			return (linked_list->value);
		}
		linked_list = linked_list->next;
	}
	return (NULL);
}

