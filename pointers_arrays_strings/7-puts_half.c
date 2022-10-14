#include "main.h"

/**
 * puts_half - puts the character
 * @str: - prints a string.
 * Return: nothing.
 */
void puts_half(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		number = number + 1;
	}

	if (number % 2 != 0)
	{
		number = (number - 1) / 2;
	}
	else
		number = number / 2;

	while (str[number] != '\0')
	{
		_putchar(str[number]);
		number = number + 1;
	}
	_putchar('\n');
}
