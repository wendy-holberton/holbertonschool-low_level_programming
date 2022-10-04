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
	int i;
	int n;

for (i = 0; i <= 9; i++)
{
	putchar(i);
}
for (n = 'a'; n <= 'f'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
