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
	char *i;
	int len;

	if (!str)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}

	ptr = malloc((str[len] + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	i = ptr;
	while (*str)
	{
		*i = *str;
		str = str + 1;
		i = i + 1;
	}
	*i = '\0';
	return (ptr);
}
