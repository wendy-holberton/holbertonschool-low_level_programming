#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - pring anything
 * @format: a list of types of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	char cha;
	int index;
	int num;
	float flo;
	char *str;

	va_list arg;

	va_start(arg, format);
	index = 0;
	while (format[index] != '\0')
	{
		switch(format[index])
		{
			case 'c':
				cha = (char) va_arg(arg, int);
				printf("%c", cha);
				break;
		 	case 'i':
				num = va_arg(arg, int);
				printf("%i", num);
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
			case 'f':
				flo = (float) va_arg(arg, double);
				printf("%f", flo);
				break;
		}
		if (format[index + 1] != '\0' && (format[index] == 'c' || format[index] == 'i' || format[index] == 'f' || format[index] == 's'))
		{
			printf(", ");	
		}
		index = index + 1;
	}
	printf("\n");
	va_end(arg);  
}
