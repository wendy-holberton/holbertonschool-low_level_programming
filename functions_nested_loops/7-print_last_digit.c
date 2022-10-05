#include "main.h"
/**
* print_last_digit - Entry point
* @i: The number to be collected
* Return: Always 0 (Success)
*/
int print_last_digit(int i)
{
_putchar(i % 10 + 48);
return (i % 10);	
}

