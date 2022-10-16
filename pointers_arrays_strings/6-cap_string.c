#include "main.h"
#include <ctype.h>

/**
* cap_string - Entry point
* @str: the pointer
* Return: Always 0 (Success)
*/
char *cap_string(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		if (str[number] == ' ' || str[number] ==  ',')
		{
			str[number + 1] = toupper(str[number + 1]);
		}
		else if (str[number] == ';' ||  str[number] == '.' || str[number] == '!')
		{
			str[number + 1] = toupper(str[number + 1]);
		}
		else if (str[number] == '?' || str[number] == '\'' || str[number] == '(')
		{
			str[number + 1] = toupper(str[number + 1]);
		}
		else if (str[number] == ')' || str[number] == '{' || str[number] == '}')
		{
			str[number + 1] = toupper(str[number + 1]);
		}
		else if (str[number] == '\t' || str[number] == '\n')
		{
			str[number + 1] = toupper(str[number + 1]);
		}
	number = number + 1;
	}
	return (str);
}
