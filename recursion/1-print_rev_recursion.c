#include "main.h"
/**
 * _print_rev__recursion - reverse recursion
 * @s: s is the pointer
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
