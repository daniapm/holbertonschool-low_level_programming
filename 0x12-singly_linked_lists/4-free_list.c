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

list_t *tmp;

tmp = head;
while (tmp!= NULL)
{
head = head->next;
	   free(tmp->str);
	   free(tmp);
	   tmp = head;
}
}
