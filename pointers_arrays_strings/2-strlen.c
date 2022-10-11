#include "main.h"

/**
 * @s: A pointer to parameter.
 * _strlen - returns the length of string
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
