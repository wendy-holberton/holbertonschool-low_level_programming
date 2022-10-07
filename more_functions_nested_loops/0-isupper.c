#include "main.h"
/**
* _isupper - Entry point
* @c: The number to be collected
* Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
return (0);
}
