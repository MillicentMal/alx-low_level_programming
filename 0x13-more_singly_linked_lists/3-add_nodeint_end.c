#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - adds node at the end
*Return:new node
*@n:integer
*@head: Pointer to pointer to the listint_t.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = malloc(sizeof(listint_t));
listint_t *ptr = *head;

if (temp == NULL)
{
return (NULL);
}
temp->n = n;

if (*head == NULL)
{
*head = temp;
return (*head);
}




while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
return  (temp);
}
