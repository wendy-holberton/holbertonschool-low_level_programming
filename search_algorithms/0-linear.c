#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - linear search for a value in an array of integers
 *
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to serach for
 * Return: -1 if array is NULL or not found value; or return i
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	if (array == NULL)
	{
		return (-1);
	}
	return (-1);
}
