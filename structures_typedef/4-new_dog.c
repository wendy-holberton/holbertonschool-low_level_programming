#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * _strcpy - copy the string
 * @dest: - pointer to the destination array where the content is to be copied
 * @src: - string which will be copied
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);

}

/**
 * _strlen - returns the length of string
 * @s: A pointer to parameter.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a = a + 1;
	}
	return (a);
}

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
	dog_t c;
	char *a;
	char *b;

	new_dog = &c;
	if (new_dog == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * (_strlen(name) + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strcpy(a, name);
	b = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (b == NULL)
	{
		return (NULL);
	}
	new_dog->owner = _strcpy(b, owner);
	new_dog->age = age;
	return (new_dog);
}
