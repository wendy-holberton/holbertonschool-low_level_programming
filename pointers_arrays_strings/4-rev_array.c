#include "main.h"

/**
 * reverse_array - puts the character
 * @a: - a is a pointer to int
 * @n: - n is the number of elements of the array
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int index;

	index = 0;
	while (index < n - 1 - index)
	{
	temp = a[index];
	a[index] = a[n - 1 - index];
	a[n - 1 - index] = temp;
	index = index + 1;
	}
}
