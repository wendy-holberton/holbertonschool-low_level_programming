#include "main.h"
/**
* mul - Entry point
* @a: The number to be collected
* @b: The number to be collected
* Return: Always 0 (Success)
*/
int mul(int a, int b)
{
	if (a > 0 && b > 0)
	{
	return (a * b);
	}
	else if (a < 0 && b > 0)
	return ((a * b) * -1);
return (0);
}
