#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function to print numbers with '\n'
 * @separatar: the string to be printed between numbers
 * @n: number of integers
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = strlen(separator);
	unsigned int i;

	va_list arg;

	va_start(arg, n);
	count = 0;
	while (count < n)
	{
		if (separator[count] >= 0)
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
