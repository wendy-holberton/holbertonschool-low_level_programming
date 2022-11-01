#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - 'is a new function name'
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;
	return (new_dog);
}
