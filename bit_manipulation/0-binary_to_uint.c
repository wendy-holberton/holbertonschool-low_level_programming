#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 subject to string b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int len;
	int inx2;
	int pow;

	if (b == NULL)
	{
		return (0);
	}

	/** check the string length */
	len = 0;
	while (b[len] != '\0')
	{
		len = len + 1;
	}

	/** add all elements in the string */
	sum = 0;
	inx2 = 0;
	while (b[inx2] != '\0')
	{
		if (b[inx2] != '0' && b[inx2] != '1')
		{
			return (0);
		}

	/** calculate the value at current spot */
		pow = len - inx2 - 1;
		if (b[inx2] == '1')
		{
			sum = sum + (1 << pow);
		}
		inx2 = inx2 + 1;
	}
	return (sum);
}
