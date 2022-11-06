#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add all elements
 *
 * @a: The element
 * @b: The element	
 * return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
 
/**
 * op_sub - Subtracts second operand from the first
 *
 * @a: The element 
 * @b: The element
 * return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies both operands
 *
 * @a: The element 
 * @b: The element
 * return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides numerator by denominator
 *
 * @a: The element 
 * @b: The element
 * return: the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Modulus Operator returns the remainder after an integer division
 *
 * @a: The element 
 * @b: The element
 * return: returns the remainder after an integer division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
