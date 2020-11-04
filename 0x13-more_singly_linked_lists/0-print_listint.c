#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_listint - prints list of elements
*@count: number of nodes 
*Return: count
*@n: integer 
*/
size_t print_listint(const listint_t *h)
{
int n = 0;

unsigned int listint_t *temp = h;

while (temp != NULL)
{
n++;
temp->next;

}
printf("%u\n",temp->next);
temp = temp->next;
return(n);
}

