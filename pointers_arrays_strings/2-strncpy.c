#include "main.h"

/**
 * _strncpy - puts the character
 * @dest: - dest is a pointer to char
 * @src: - src is a pointer to char
 * @n: - n is the number to be collectd
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int number;

	number = 0;
	while (src[number] != '\0' && number < n)
	{
	dest[number] = src[number];
	number = number + 1;
	}
	return (dest);
}

