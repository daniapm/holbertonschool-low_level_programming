#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * *insert_nodeint_at_index - Entry Point
 * @head: variable
 * @idx: variable
 * @n: variable
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nuevo_nodo, *tmp;

nuevo_nodo = malloc(sizeof(listint_t));
if (nuevo_nodo == NULL)
{
return (NULL);
}
nuevo_nodo->n = n;
if (head == NULL)
{
return (nuevo_nodo);
}
if (idx == 0)
{
nuevo_nodo->next = *head;
return (nuevo_nodo);
}
tmp = *head;
while (idx - 1 > 0)
	{
tmp = tmp->next;
if (tmp == NULL)
{
	return (NULL);
}
idx--;
}

nuevo_nodo->next = tmp->next;
tmp->next = nuevo_nodo;

return (*head);
}
