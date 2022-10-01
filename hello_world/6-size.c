#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int intType;
long long int intType;
float floatType;

// sizeof evaluates the size of a variable
printf("size of char: %zu byte\n", sizeof(charType));
printf("size of int: %zu bytes\n", sizeof(intType));
printf("size of long int: %zu byes\n", sizeof(intType));
printf("size of long long int: %zu byes\n", sizeof(intType));
printf("size of float: %zu bytes\n", sizeof(floatType));

return (0);
}
