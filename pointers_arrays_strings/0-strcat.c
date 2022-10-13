#include "main.h"

/**
 * _strcat - puts the character
 * @dest: - dest is a pointer to char
 * @src: - src is a pointer to char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int a;

	a = 0;
	while (src[a] != '\n')
	{
		a = a + 1;
	}
	dest[a] = src[-1];
	return (src);
}


