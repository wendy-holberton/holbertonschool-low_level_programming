#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	while (i < (max - min + 1))
	{
		ptr[i] = min + i;
		i = i + 1;
	}	
	if (min > max)
	{
		return (NULL);
	}
	return (ptr);
}
