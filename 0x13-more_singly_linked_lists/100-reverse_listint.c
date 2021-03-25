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
	listint_t *prev = NULL;
	listint_t *next = NULL;
	listint_t *current;

current = *head;
	if (current != NULL)
	{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	}
*head = prev;
	return (*head);
}
