#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: the character
 * @size: the size of the memory
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	b = 0;
	while (b < size)
	{
		ptr[b] = c;
		b = b + 1;
	}

	return (ptr);
}
