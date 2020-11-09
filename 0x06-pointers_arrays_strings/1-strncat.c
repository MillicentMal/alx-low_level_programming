#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: The number of bytes from src to be appended to dest
 *Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
int count_src, count_dest;

for (count_dest = 0; dest[count_dest] != '\0'; count_dest++)
;

for (j = 0; src[count_src] != '\0' && n > 0; count_src++, n--, count_dest++)
{
dest[count_dest] = src[count_src];
}
return (dest);
}
