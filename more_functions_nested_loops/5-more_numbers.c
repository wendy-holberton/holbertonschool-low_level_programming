#include "main.h"
/**
* more_numbers - Entry point
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		int b;

		for (b = 48; b <= 57; b++)
		{
		_putchar(b);
		}
	_putchar('X');
	_putchar('\n');
	}
}
