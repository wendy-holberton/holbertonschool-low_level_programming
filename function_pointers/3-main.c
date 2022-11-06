#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc
 * @argv
 * return: Always 0. (Success)
 */
int main (int argc, char *argv[])
{
	int i;
	int num1;
	int num2;
	int (*func)(int, int);	
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	(void)argc; 
	func = get_op_func(argv[2]); 
	i = func(num1, num2);
	printf("%d\n", i);

	return (0);
}
