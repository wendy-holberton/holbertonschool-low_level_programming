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
		if (separator[count] != '\0')
		{
			i = va_arg(arg, unsigned int);
			printf("%d\n", i);
		}
		else if (separator == NULL)
		{
			return;
		}
		count = count + 1;
	}
	va_end(arg);
}
