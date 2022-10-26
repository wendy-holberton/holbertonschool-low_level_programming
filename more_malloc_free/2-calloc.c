#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: is an unsigned integer
 * @size: the size of the memory
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb)
	{
		ptr[i] = 0;
		i = i + 1;
	}
	return (ptr);
}

