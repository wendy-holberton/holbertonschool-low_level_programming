#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the character
 * @s2: i
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int len1;
	int len2;

	i = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1 = len1 + 1;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2 = len2 + 1;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i = i + 1)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; i < len2; i = i + 1)
		{
			ptr[i + len1] = s2[i];
		}
		ptr[len1 + len2 + 1] = '\0';
	}
	return (ptr);
}
