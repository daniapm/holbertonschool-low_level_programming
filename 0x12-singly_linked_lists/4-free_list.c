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
list_t *curr = head;
list_t *next;
while (curr->next)
	{
next = curr->next;
free(curr);
curr = next;
}
head = NULL;
}
