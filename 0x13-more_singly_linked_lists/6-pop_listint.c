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
int retval;

listint_t *next_node;

if (*head == NULL)
{
return (-1);
}
next_node = (*head)->next;
retval = (*head)->n;
free(*head);
*head = next_node;
return (retval);
}
