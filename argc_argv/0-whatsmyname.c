#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - name
 *@argc: count of the arguments
 *@argv[]: an array of pointers to the string
 *return: 0
 */


int main(int argc, char *argv[])
{
	printf("mynameis\n");
	(void) argv[argc - 1];
	return (0);
}
