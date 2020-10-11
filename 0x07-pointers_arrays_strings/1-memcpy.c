#include "holberton.h"
/**
*_memcpy-copies memory area.
*@src:source memory area.
*@dest:destination memory area.
*@n:number of bytes.
*Return:Pointer to the destination memory dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
while (n--)
*dest++ = *src++;
return (ptr);
}
