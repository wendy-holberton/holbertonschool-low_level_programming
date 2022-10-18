#include "main.h"

/**
 * _memcpy - puts the character
 * @dest: - destination
 * @src: -s is string
 * @n: - n is the parameter
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
	dest[index] = src[index];
	index = index + 1;
	}
return (dest);
}
