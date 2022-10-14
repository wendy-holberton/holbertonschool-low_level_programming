#include "main.h"
#include <stdio.h>

/**
 * print_array - puts the character
 * @a: - poniter named a.
 * @n: - number to be collected.
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int loop;

	if (n <= 0)
	{
	printf("\n");
	return;
	}
	for (loop = 0; loop < (n - 1); loop = loop + 1)
	printf("%d, ", a[loop]);
	printf("%d", a[loop]);
	printf("\n");
}
