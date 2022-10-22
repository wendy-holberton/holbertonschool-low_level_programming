#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - name
 *@argc: the number of the arguments
 *@argv: an array of pointers to the string
 *i:
 *Return: Always 0 (Success)
 */


int main(int argc, char **argv)
{
	int string, sum;

	sum = 0;
	for (string = 1; string < argc; string = string + 1)
	{
		if (atoi(argv[string]) > 0)
		{
			sum = sum + atoi(argv[string]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
