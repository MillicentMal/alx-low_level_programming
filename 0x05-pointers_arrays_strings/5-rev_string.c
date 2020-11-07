#include "holberton.h"
/**
*rev_string - reverses string
*@s: string to be reversed
*
*/
void rev_string(char *s)
{
int count, len, temp;
len = 0;
while (s[len] != '\0')
{
len++;
}
len -= 1;
for (count = 0; count < len; count++)
{
temp = s[len];
s[len] = s[count];
s[count] = temp;
}
}
