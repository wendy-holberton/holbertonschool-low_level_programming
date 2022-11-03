#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function array_iterator
 * @array: is a pointer to int
 * @size: size of the array
 * @action: is a pointer to function, takes one parameter as an argument,
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;

	index = 0;
	while ((size_t)index < size)
	{
		action(array[index]);
		index = index + 1;
	}
}
