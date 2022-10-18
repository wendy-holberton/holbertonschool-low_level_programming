#include "main.h"

/**
 * _memset - puts the character
 * @s: - poniter named s.
 * @b: - b is byte for memory
 * @n: - n is the parameter
 * Return: nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
	s[index] = b;
	index = index + 1;
	}
return (s);
}
