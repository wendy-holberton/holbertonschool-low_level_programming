#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function to print numbers with '\n'
 * separatar: 'the pointer to char'
 * @n: number of integers
 *
 * Return: Nothing (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	unsigned int i;

	va_list arg;

	va_start(arg, n);
	count = 0;
	while (count < n)
	{
		i = va_arg(arg, unsigned int);
		if (count != n-1)
		{
			printf("%d%s ", i, separator);
		}
		else
		{
			printf("%d\n", i);
		}
		if (separator == NULL)
		{
			return;
		}
		count = count + 1;
	}
	va_end(arg);
}
