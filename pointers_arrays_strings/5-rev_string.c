#include "main.h"

/**
 * rev_string - puts the character
 * @s: - writes a reverse stringt.
 * Return: nothing.
 */
void rev_string(char *s)
{
	int a;
	int last_index, first_index;
	char old_character;

	a = 0;
	while (s[a] != '\0')
	{
		a = a + 1;
	}
	last_index = a - 1;
	first_index = 0;
	while (first_index < last_index)
	{
		old_character = s[first_index];
		s[first_index] = s[last_index];
		s[last_index] = old_character;
		first_index = first_index + 1;
		last_index = last_index - 1;
	}
}

