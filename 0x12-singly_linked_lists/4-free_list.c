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
	list_t *to_free = head;

	while (to_free != NULL)
	{
		head = head->next;
		free(to_free);
		to_free = head;
	}
}
