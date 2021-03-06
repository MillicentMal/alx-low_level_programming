#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2-Frees memory occupied by a list.
 *@head:Pointer to the first node of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
{
free(head);
}
else
{


while (*head != NULL)
{
temp = (*head);
(*head) = (*head)->next;
free(temp);
}
head = NULL;
}
}
