#include "main.h"

/**
 * _strcpy - copy the string
 * @dest: - pointer to the destination array where the content is to be copied
 * @src: - string which will be copied
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);

}
