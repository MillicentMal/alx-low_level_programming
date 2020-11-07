#include "holberton.h"
/**
**_strcpy- copies string from src to dest
*@src: pointer to string to be copied
*@dest: pointer to new string
*Return: pointer to new string dest
*/
char *_strcpy(char *dest, char *src)
{

int count, len;
while (*(src + len) != 0)
{
len++;
}
for (count = 0; count <= len + 1; count++)
{
*(dest + count) = *(src + count);
}
return (dest);
}

