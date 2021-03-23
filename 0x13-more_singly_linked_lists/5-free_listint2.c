#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * free_listint2- Entry Point
 * @head: variable
 * Return: 0
 */

void free_listint2(listint_t **head)
{

listint_t *freed;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		freed = *head;
		*head = (*(head))->next;
		free(freed);
	}
	*head = NULL;
}