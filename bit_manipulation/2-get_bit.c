#include <stdio.h>
#include "main.h"

/**
 * get_bit - get a bit at a given index
 * @index: the index
 * @n: the value for a variable
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	n = n >> (index);
	return (n & 1u);
}
