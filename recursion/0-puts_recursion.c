#include "main.h"
/**
 * main - check the code
 * @s: s is the pointer
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s = s + 1;
	_puts_recursion(s);
}
