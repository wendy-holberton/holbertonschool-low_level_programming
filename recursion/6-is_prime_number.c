#include "main.h"
/**
 *_prime_number - function name
 *@n: n is the integer
 *@i: i is the integer
 * Return: always 0
 */





int _prime_number(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = i + 1;
		return (_prime_number(n, i));
	}
}


/**
 *is_prime_number - prime number recursion
 *@n: n is the integer
 * Return: always 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
return (_prime_number(n, 2));
}
