#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint - Entry Point
 * @head: variable
 * @n: variable
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nuevo_nodo;
nuevo_nodo = malloc(sizeof(listint_t));

if (nuevo_nodo != NULL)
{
nuevo_nodo->n = n;
nuevo_nodo->next = *head;
*head = nuevo_nodo;
}
return (nuevo_nodo);
}
