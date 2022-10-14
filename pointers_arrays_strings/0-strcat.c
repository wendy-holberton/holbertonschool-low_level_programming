#include "main.h"

/**
 * _strcat - puts the character
 * @dest: - dest is a pointer to char
 * @src: - src is a pointer to char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a = a + 1;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b = b + 1;
	}
	dest[a + b] = '\0';
	return (dest);
}


