#include <stdio.h>
/**
*main - prints numbers
*
*Return: always 0 (success)
*/
int main(void)
{
int c = 48;

while
(c <= 58)
{
putchar(c);
c++;
if
(c != 57)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
