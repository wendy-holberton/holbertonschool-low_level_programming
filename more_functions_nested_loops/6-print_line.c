#include "main.h"
/**
* print_line - Entry point
i* @n: The number of times
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	char underscore = 95;

	while (n > 0)
	{
	_putchar(underscore);
	n--;
	}
	_putchar('\n');
}
