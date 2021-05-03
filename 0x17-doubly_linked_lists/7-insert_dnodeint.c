#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * insert_dnodeint_at_index - Entry Point
 * @h: variable
 * @idx: variable
 * @n: variable
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *nuevo_nodo, *tmp;

if (h == NULL)
return (NULL);
nuevo_nodo = malloc(sizeof(dlistint_t));
if (nuevo_nodo == NULL)
{
return (NULL);
}
nuevo_nodo->n = n;
if (idx == 0)
{
nuevo_nodo->next = *h;
*h = nuevo_nodo;
return (nuevo_nodo);
}
tmp = *h;
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
return (nuevo_nodo);
}
