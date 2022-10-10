#include "main.h"

/**
 * Swap_int - swap the integer
 * @a: a pointer the integer
 * @b: a pointer the integer
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
