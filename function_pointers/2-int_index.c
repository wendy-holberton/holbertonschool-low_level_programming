#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function to search for an int
 * @array: is a pointer and point to int
 * @size: the number of elements in the array
 * @cmp: is a pointer to function, takes one parameter int and return int
 * Return: the index of the first element for which the cmp function doesn't
 *return 0, or retun -1 if no element matches / if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (size > 0)
	{
		return (1);
	}
	index = 0;
	while (index < size)
	{
		cmp(array[index]);
		index = index + 1;
	}
	return (cmp(array[index]));
}
