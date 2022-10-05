#include <stdio.h>
#include "main.h"
/**
* _isalpha - Entry point
* @c: The number to be checkeud
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 41 && c <= 90)
	{
		return (0);
	}
	putchar(c);
	return (0);
}
