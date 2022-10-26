#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 * @b:
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	unsigned int i;

	i = 0;
	while (i < b)
	{
		ptr = malloc(b);
		i = i + 1;
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
