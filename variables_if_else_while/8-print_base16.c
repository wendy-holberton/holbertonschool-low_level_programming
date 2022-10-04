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

for (i = '0', i++, n = 'a', n++)
	if (i <= '9')
	{
		putchar(i);
	}
	else if (n <= 'f')
	{		
		putchar(n);
	}
	putchar('\n');
	return (0);
}
