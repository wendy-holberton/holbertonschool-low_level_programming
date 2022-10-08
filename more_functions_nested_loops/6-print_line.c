#include "main.h"
/**
* print_line - Entry point
* @a: The number to be collected
* @n: The number of times
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	int n;

	char a;
	
	a = 95 * n;
	while (n > 0)
	{	
	_putchar(95 * n);
	}
	while (n <= 0) 	
	{	
	_putchar('\');
	_putchar(n);
	}
	_putchar('\n');
}
