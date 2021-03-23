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
listint_t *current = NULL;

while (head != NULL)
	{
current = head;
*head = head->next;
free(current);
}
}
