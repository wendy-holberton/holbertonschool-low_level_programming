#include <stdio.h>
#include "main.h"
/**
* _isalpha - Entry point
* @c: The number to be checked
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 67 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
