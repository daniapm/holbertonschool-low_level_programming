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
unsigned int i = 0;
if (h == NULL)
return (NULL);
nuevo_nodo = malloc(sizeof(dlistint_t));
tmp = *h;
if (nuevo_nodo == NULL)
{
return (NULL);
}
nuevo_nodo->n = n;
if (idx == 0)
{
	if (*h)
	{
		nuevo_nodo->next = *h;
		(*h)->prev = nuevo_nodo;
	}
	*h = nuevo_nodo;
return (nuevo_nodo);
}
		while (i < idx - 1 && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			return (NULL);
		}
			else if (tmp->next)
			{
				tmp->next->prev = nuevo_nodo;
				nuevo_nodo->next = tmp->next;
				nuevo_nodo->prev = tmp;
				tmp->next = nuevo_nodo;

			}
			return (nuevo_nodo);
}
