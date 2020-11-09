#include "holberton.h"

/**
 *_strcmp - compares pointers to two strings
 *@s1: A pointer to the first string to be compared
 *@s2: A pointer to the second string to be compared
 *
 *Return: If str1 < str2, the negative difference
 *        If str1 == str2,0
 *        If str1 > str2, the positive difference
 */
int _strcmp(char *s1, char *s2)
{
for (; *s1 == *s2; s1++, s2++)
if (*s1 == '\0')
return (0);
return (*s1 - *s2);
}
