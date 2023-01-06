#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - print the array
 *
 * @array: a pointer to the first element of the array
 * @leftIndex: the first index in the array
 * @rightIndex: the last index in the array
 */
void print_array(int *array, size_t leftIndex, size_t rightIndex)
{
	size_t index;

	index = leftIndex;

	printf("Searching in array:");

	while (index < rightIndex)
	{
		printf(" %d,", array[index]);
		index = index + 1;
	}
	printf(" %d\n", array[rightIndex]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t leftIndex, rightIndex;
	int middlePoint;

	leftIndex = 0;
	rightIndex = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	if (size == 0)
	{
		return (-1);
	}
	if (leftIndex > rightIndex)
	{
		return (-1);
	}
	while (leftIndex <= rightIndex)
	{
		print_array(array, leftIndex, rightIndex);
		middlePoint = leftIndex + (rightIndex - leftIndex) / 2;

		if (array[middlePoint] < value)
		{
			leftIndex = middlePoint + 1;
		}
		else if (array[middlePoint] > value)
		{
			rightIndex = middlePoint - 1;
		}

		else
		{
			return (middlePoint);
		}
	}
	return (-1);
}
