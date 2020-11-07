#include "holberton.h"
/**
*print_rev -prints string in reverse to stdout
*@s: pointer to string
*/
void print_rev(char *s)
{
int counter, len;
while (*(s + len) != 0)
{
len++;
}
for (counter = len - 1; counter >= 0 ; counter--)
{

_putchar(s[counter]);
}
_putchar('\n');
}
