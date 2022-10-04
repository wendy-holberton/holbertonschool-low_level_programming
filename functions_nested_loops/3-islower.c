#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* _islower - Entry point
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (islower(c) > 0)
	{
		putchar('c');
	}
	else
	{
		putchar('C');
	}
	putchar('\n');
	return (0);
}
