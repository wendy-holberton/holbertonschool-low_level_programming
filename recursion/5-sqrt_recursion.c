#include "main.h"
/**
 * _sqrt_recursion - square root recursion
 * _sqrt_recur - function sqrt recur
 * @n: n is the interger
 * @current_number: is the interger
 * Return: always 0
 */
int _sqrt_recur(int current_number, int n)
{
	if (current_number * current_number == n)
	{
		return (current_number);
	}

	if (current_number * current_number > n)
	{
		return (-1);
	}
	return (_sqrt_recur(current_number + 1, n));
}
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(1, n));
}
