#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*listint_len - counts number of elements
*Return:number of nodes
*@h: Pointer to the listint_t.
*/
size_t listint_len(const listint_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

