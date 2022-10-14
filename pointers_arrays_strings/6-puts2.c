#include "main.h"

/**
 * puts2 - puts the character
 * @str: - prints a stringd.
 * Return: nothing.
 */
void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a = a + 1;
	}
	_putchar('\n');
}
