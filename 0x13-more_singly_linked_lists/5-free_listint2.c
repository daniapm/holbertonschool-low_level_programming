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

	listint_t *curren;

	if (head != NULL || *head != NULL)
	{
	while (*head != NULL)
	{
		curren = *head;
		*head = (*(head))->next;
		free(curren);
	}
	*head = NULL;
	}
}
