#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - 'is a new function name'
 * @d: is porint to type dog_t
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
