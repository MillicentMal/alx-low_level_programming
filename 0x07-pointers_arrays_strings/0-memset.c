#include "holberton.h"
/**
*_memset-fill memory with a constant byte.
*@s:pointer to the memory area.
*@b:constant byte to fill memory area.
*@n:number of bytes.
*Return:Pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i;
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}
