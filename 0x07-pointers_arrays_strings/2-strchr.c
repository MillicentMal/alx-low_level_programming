#include "holberton.h"
/**
*_strchr- locates a character in a string.
*@s: string to be searched
*@c: target char
*Return: pointer to the first occurence of a c or NULL if char not found
*/
char *_strchr(char *s, char c)
{
char *NULL = '\0';
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
if (!c)
return (s);
return (NULL);
}
