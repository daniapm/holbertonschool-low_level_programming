#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 * free_list- Entry Point
 * @head: variable
 * Return: 0
 */

void free_list(list_t *head)
{
list_t *current, *next;
	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

}
