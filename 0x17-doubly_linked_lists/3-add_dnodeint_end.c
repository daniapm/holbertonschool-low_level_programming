#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
dlistint_t *crear_nodo(int n);

/**
 * add_dnodeint_end - Entry Point
 * @head: variable header
 * @n: variable date
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *aux;

aux = *head;
tmp = malloc(sizeof(dlistint_t));
if (tmp == NULL)
{
	return (NULL);
}
if (*head == NULL)
{
	tmp->next = NULL;
	tmp->n = n;
	tmp->prev = NULL;
	*head = tmp;
	return (tmp);
}
	while (aux->next)
	{
	aux = aux->next;
	}
	aux->next = tmp;
	tmp->prev = aux;
	tmp->next = NULL;
	tmp->n = n;
return (tmp);
}
