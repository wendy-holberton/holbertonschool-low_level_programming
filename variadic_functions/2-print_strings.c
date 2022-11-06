#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * separator: a string between the strings
 * @n: the number of strings
 * Return: Nothing (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;

	va_list arg;

	va_start(arg, n);
	index = 0;
	while (index < n)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && index != n - 1)
		{
			printf("%s", separator);
		}
		index = index + 1;
	}
	printf("\n");
	va_end(arg);
}
