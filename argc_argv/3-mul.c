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
	int string1, string2;

	string1 = 1;
	string2 = 2;
	if (argv[string1] == NULL || argv[string2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[string1] != NULL && argv[string2] != NULL)
	{
		printf("%d\n", atoi(argv[string1]) * atoi(argv[string2]));
		return (0);
	}
	(void)argc;
return (0);
}
