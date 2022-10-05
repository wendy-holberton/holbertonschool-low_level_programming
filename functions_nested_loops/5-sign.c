#include <stdio.h>
#include "main.h"
/**
* _isalpha - Entry point
*@n: The number to be checked
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+1');
		return (1);
	}
	else if (n == 0)
	{
		putchar(00);
		return (0);
	}
	else
	{
		putchar('-1');
		return (-1);
	}
return (0);
}
