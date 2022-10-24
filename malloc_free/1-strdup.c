#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - is a duplicte of the string pointed to by s
 * @str: the character
 *
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * str);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < str)
	{
		prt[i] = str[i];
		i = i + 1;
	}
	return (ptr);
}
