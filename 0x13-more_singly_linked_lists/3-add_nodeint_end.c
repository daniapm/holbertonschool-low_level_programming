#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint_end - Entry Point
 * @head: variable
 * @n: variable
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *curr;
tmp = malloc(sizeof(listint_t));

if (tmp != NULL)
{
tmp->n = n;
tmp->next = NULL;
if (*head == NULL)
{
*head = tmp;
return (tmp);
}
curr = *head;
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = tmp;
}
return (curr);
}
