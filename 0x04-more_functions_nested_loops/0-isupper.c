#include "holberton.h"
/**
*_isupper - checks if uppercase_
*Return: 1 always (success)
*
*/
int _isupper(int c)
{
char c;
for (c = 'A'; c <= 'Z'; c++)
{
_putchar(c);
_putchar(':');
_putchar('1');
}
else
return (0);
}



