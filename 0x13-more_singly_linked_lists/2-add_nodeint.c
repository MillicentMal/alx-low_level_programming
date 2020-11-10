#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint - adds node at the beginning
*Return:new node
*@n:integer
*@head: Pointer to pointer to the listint_t.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}

