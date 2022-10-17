#include "main.h"
/**
 * factorial - reverse recursion
 * @n: n is the number to be collected
 * Return: always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (1);
	}
	else if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	return (0);
}
