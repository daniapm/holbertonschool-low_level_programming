#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_list- Entry Point
 * @head: variable
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *puntero;

	puntero = head;
	while (head != NULL)
	     head = head->next;
	free(puntero->str);
	free(puntero);
}
