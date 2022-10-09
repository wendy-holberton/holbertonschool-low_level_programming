#include "main.h"
/**
* more_numbers - Entry point
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		int b = 0;

		for (b = 0; b <= 14; b++)
		{
			int c;

			if (b <= 9)
			{
				c = b + 48;
			}
			else
			{
			_putchar('1');
				c = b + 48 - 10;
			}
			_putchar(c);
		}
	_putchar('\n');
	}
}
