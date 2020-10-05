#include <stdio.h>
/**
*main - print numbers 0-100
*
*Return: always 0 (success)
*/
int main(void)
{
int c, d;
for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
putchar(c);
putchar(d);
if (c == 57 && d == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

