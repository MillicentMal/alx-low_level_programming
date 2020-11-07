#include "holberton.h"
/**
*_puts -prints string to stdout
*
*@str: string to be checked
*
*/
void _puts(char *str)
{
int counter;
for (counter = 0; str[counter] != '\0'; counter += 2)
{
_putchar(str[counter]);
}
_putchar('\n');
}
