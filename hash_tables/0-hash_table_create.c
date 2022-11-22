#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: a pointer, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **nodes;

	nodes = malloc(sizeof(*nodes) * size);
	if (nodes == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		free(nodes);
		return (NULL);
	}

	new->size = size;
	new->array = nodes;

	return (new);
}
