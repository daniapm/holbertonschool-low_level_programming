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

list_t *nuevo_nodo, *tmp;

nuevo_nodo = head;
while (nuevo_nodo != NULL)
{
	tmp = nuevo_nodo->next;
	   free(nuevo_nodo->str);
	   free(nuevo_nodo);
	   nuevo_nodo = tmp;
}
}
