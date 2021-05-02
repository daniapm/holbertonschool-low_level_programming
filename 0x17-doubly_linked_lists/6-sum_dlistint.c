#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * sum_dlistint - Entry Point
 * @head: variable
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{

int suma = 0;

while (head != NULL)
{
suma += head->n;
head = head->next;
}
return (suma);
}
