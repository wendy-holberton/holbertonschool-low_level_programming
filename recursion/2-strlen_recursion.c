#include "main.h"
/**
 * _strlen_recursion - retrun strlen
 * @s: s is the pointer
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
	return (0);
	}
	_strlen_recursion(s + 1);
	return (s[0]);
}

