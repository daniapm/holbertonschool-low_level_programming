#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * reverse_listint - Entry Point
 * @head: variable
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *next = NULL;

	if (head != NULL)
	{
	while (*head)
	{
	next = (*head)->next;
	(*head)->next = new;
	new = *head;
	*head = next;
	}
	}
	*head = new;
	return (*head);
}
