#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"
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
		
	if (leftIndex > rightIndex)
	{
		return (-1);
	}

	while (leftIndex <= rightIndex)
	{
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
	 	printf("Searching in array: %d, %d, %d\n", array[leftIndex], array[middlePoint], array[rightIndex]);	
	}
/**		printf("Searching in array: %d, %d, %d\n", array[leftIndex], array[middlePoint], array[rightIndex]);*/
/**		printf("Searching in array: %d\n", array[leftIndex]);*/
/**		printf("Searching in array: %d\n", array[rightIndex]);*/
		
	return (-1);
}

/**
	while (leftIndex == rightIndex)
	{
		middlePoint = leftIndex + (rightIndex - leftIndex) / 2;
		
		if (array[middlePoint] > value)
		{
			rightIndex = middlePoint - 1;
		}
		
		else
		{
			leftIndex = middlePoint;
		}
		printf("leftIndex %lu, rightIndex %lu, middlePoint %d\n", leftIndex, rightIndex, middlePoint);
	}
	if (array[leftIndex] == value)
	{
		return (leftIndex);
	}
	return (-1);
}

*/
