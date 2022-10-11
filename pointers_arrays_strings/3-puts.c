#include "main.h"

/**
 * _puts - puts the character
 * @str: - writes a string to stdout up to but not including null character.
 * Return: nothing.
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a = a + 1;
	}
}

