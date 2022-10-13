#include "main.h"

/**
 * strcat - puts the character
 * @*dest: - dest is a pointer to char
 * @*src: - src is a pointer to char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int a;

	a = 0;
	while (src[a] != '\n')
	{
		a = a + 1;
	}
	dest[a] = src[-1];
	return (src);
}


/**
 *src[0] = "w";
 *src[1] = "o";
 *src[2] = "r";
 *src[3] = "l";
 *src[4] = "d";
 *src[5] = "!";



 *dest[0] = "H";
 *dest[1] = "e";
 *dest[2] = "l";
 *dest[3] = "l";
 *dest[4] = "o";
 *dest[5] = " ";



 * name: dest
 * type: char *
 * value: "Hello "
 * context: _strcat
 * address:
 * name: src
 * type: char *
 * value: "World\n"
 * context: _strcat
 * address:
 */
