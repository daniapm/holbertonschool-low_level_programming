#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * pop_listint - Entry Point
 * @head: variable
 * Return: 0
 */

int pop_listint(listint_t **head)
{

listint_t *next_node;
int n;

if (*head == NULL)
{
return (0);
}
next_node = *head;
*head = next_node->next;
n = next_node->n;
free(next_node);
return (n);
}
