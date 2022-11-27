#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary
 * @n: a number 
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int index = 1;
	int mask;

	while (index >= 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask = (1 << index);
		index = index - 1;
	}
}
