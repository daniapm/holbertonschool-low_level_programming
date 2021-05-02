#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Entry Point
 * @head: variable
 * @n: variable
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nuevo_nodo;
nuevo_nodo = crear_nodo(n);
if (nuevo_nodo != NULL)
{
	nuevo_nodo->next = *head;
	nuevo_nodo->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = nuevo_nodo;
	}
*head = nuevo_nodo;
return (nuevo_nodo);
}
return (0);
}

/**
 * crear_nodo - Entry Point
 * @n: variable
 * Return: 0
 */

dlistint_t *crear_nodo(int n)
{
dlistint_t *nuevo_nodo;
nuevo_nodo = malloc(sizeof(dlistint_t));

if (nuevo_nodo != NULL)
{
nuevo_nodo->n = n;
nuevo_nodo->next = NULL;
nuevo_nodo->prev = NULL;
}
return (nuevo_nodo);
}
