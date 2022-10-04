#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';
	int n = 'a';

	if (i <= '9')
	{
		putchar(i);
		i++;
	}
	else if (n <= 'f')
	{		
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
