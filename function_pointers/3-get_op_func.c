#include <stdio.h>
#include "3-calc.h"


/**
 * get_op_func - a pointer to function called get_op_func
 * @s: a operator passed as argument to the program
 * return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	i = 0;
	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return ops[i].f;
		}
		i = i + 1;
	}
	return (NULL);
}
