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
	int len;

	i = 0;
	if (!str)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		++i;
	}

	len = i;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i <= len; ++i)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
