#include "holberton.h"
/**
*_strlen - checks for and returns length of string
*Return: length of string
*@s: string to be checked
*
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; s[counter] != '\0'; counter++)
{
}
return (counter);
}

/**
*rev_string - reverses string
*@s: string to be reversed
*/
void rev_string(char *s)
{
int counter = _strlen(s);
int n = 0;
char temp;
while (n < counter / 2)
temp *(s + n);
*(s + n) = *(s + counter - 1 - n);
*(s + counter - 1 - n) = temp;
n++;
}
}
