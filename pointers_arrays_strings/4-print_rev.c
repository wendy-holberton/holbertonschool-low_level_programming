#include "main.h"

/**
 * print_rev - puts the character
 * @s: - prints a string in reverse.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a = a + 1;
	}
	a = a - 1;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a = a - 1;
	}
	_putchar('\n');
}
