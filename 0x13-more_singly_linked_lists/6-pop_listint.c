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
	int n;
	listint_t *new_nodo;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	new_nodo = *head;
	*head = new_nodo->next;
	n = new_nodo->n;
	free(new_nodo);
	return (n);
}
