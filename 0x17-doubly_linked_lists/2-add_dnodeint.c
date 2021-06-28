#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *add_dnodeint - a function that adds a new node at
 *the beginning of list
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @head: points to the head node
 *
 * Return:the address of new_node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
/*checks if new_node is there*/
if (!new_node)
{
return (NULL);
}
/*allocates memory for new_node*/

struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
/*assigns next pointer to head*/
new_node->next = (*head);
/*assigns NULL to prev pointer*/
new_node->prev = NULL;
/*if head is not null then the previous for head becomes new_node*/
if ((*head) != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
