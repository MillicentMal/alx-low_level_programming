#include <stdio.h>
#include <stdlib.h>
/**
*linear_search - does a linear search on an array of size size
*@size: the number of elements in array
*@value: the value to search for
*Return: index
*/

int linear_search(int *array, size_t size, int value)
{
int i = 0;
int j = size
for (i = 0; i < j; i++) {
if (array[i] == value) 
{
return(i);
}
elif ((array[i] != value) || (array == NULL)) 
{
return(-1);
}
}
}

