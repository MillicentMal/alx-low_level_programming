#include "lists.h"
/**
*print_list - prints all elements in the list
*Return: returns number of nodes
*
*/
typedef int = size_t
size_t print_list(const list_t *h)
{
size_t = 0;
if h == NULL
printf("nil")
ptr = h
while (ptr != h)
{
size_t++;
ptr-> data
printf("%d", data);
ptr= ptr -> link;
}
return(size_t);
}
