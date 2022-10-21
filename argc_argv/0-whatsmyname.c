#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - name
 * @argc: count of the arguments
 * @argv: an array of pointers to the string
 * i:
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
return (0);
}

