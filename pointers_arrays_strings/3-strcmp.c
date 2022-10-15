#include "main.h"

/**
 * _strcmp - puts the character
 * @s1: - dest is a pointer to char
 * @s2: - src is a pointer to char
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
	if (s1[index] > s2[index])
	{
	return (s1[index] - s2[index]);
	}
	else if (s1[index] < s2[index])
	{
	return (s1[index] - s2[index]);
	}
		index = index + 1;
	}
	return (0);
}

