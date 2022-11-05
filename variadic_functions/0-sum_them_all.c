#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function to sum all elements in the parameters
 * @n: number of arguments
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int count;

	va_list ptr;

	va_start(ptr, n);

	sum = 0;
	count = 0;
	while (count < n)
	{
		sum = sum + va_arg(ptr, unsigned int);
		count = count + 1;
	}
	va_end(ptr);
	return (sum);
}
