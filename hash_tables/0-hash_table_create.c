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

	new = malloc(sizeof(*new));
	if (new == NULL)
	{	
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(*(new->array)) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
