#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: is the pointer assigned to the variables
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return ();
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
