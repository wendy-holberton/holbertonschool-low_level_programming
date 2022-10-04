#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		char i = 'a';

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
	putchar('\n');
	}
}
