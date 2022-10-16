#include "main.h"
#include <ctype.h>

/**
* string_toupper - Entry point
* @str: The pointer
* Return: Always 0 (Success)
*/
char *string_toupper(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		str[number] = toupper(str[number]);
		number = number + 1;
	}
	return (str);
}
