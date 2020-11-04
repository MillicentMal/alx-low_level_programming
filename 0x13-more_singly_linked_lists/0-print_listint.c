#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_listint - prints list of elements
*@count: number of nodes 
*Return: count
*@n: integer
*@h: Pointer to the listint_t. 
*/
size_t print_listint(const listint_t *h)
{
size_t count;
count = 0; 


while (h != NULL)
{

printf("%d\n",h->n);
count++;
h = h->next;
}
return(count);
}

