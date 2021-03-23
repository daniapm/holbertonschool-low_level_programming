#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * *get_nodeint_at_index - Entry Point
 * @head: variable
 * index: variable
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
