#include "main.h"
#include <string.h>

/**
 * _strncat - string concatenation
 * @dest: - This is the pointer to the destination
 * @src: - This is the stringer to be copied.
 * @n: - The number to be collected
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index;
	int number;

	index = 0;
	number = 0;
	while (dest[index] != '\0')
	{
		index = index + 1;
	}
	while (number < n && src[number] != '\0')
	{
		dest[index + number] = src[number];
		number = number + 1;
	}
return (dest);
}

