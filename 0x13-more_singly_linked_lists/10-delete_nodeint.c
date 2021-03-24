#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * delete_nodeint_at_index - Entry Point
 * @head: variable
 * @index: variable
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *temp, *sig;
unsigned int i;

if (!head)
return (-1);
temp = *head;
if (index == 0)
{
temp = (*head)->next;
*head = temp;
return (1);
}
for (i = 0; temp != NULL && i < index - 1; i++)
temp = temp->next;
if (temp == NULL || temp->next == NULL)
{
return (-1);
}
sig = temp->next->next;
*temp->next = *sig;
return (1);
}

