#include "main.h"
#include <stddef.h>

/**
 * _strchr - searches for the first occurrence of the character c
 * @s: is a pointer
 * @c: this is the character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != c && s[index] != '\0')
	{
		index = index + 1;
	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (NULL);
}

