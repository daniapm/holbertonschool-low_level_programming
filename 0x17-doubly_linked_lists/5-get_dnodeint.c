#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * get_dnodeint_at_index - Entry Point
 * @head: variable
 * @index: variable
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

unsigned int count;

count = 0;
while (head != NULL || head != NULL)
	{
if (count == index)
return (head);
count++;
head = head->next;

}
return (NULL);
}
