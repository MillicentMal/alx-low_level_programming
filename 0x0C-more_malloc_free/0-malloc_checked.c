#include "holberton.h"
/**
*malloc_checked - allocates memory using malloc
*@b:number of bytes to be allocated
*
*Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}

