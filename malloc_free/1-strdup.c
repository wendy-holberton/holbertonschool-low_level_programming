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

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}

	ptr = malloc(sizeof(ptr) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i];
		i = i + 1;
	}
	return (ptr);
}
