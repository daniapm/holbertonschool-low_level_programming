#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
int _strlen(char *str);


/**
 * *add_node_end- Entry Point
 * @head: variable
 * @str: variable
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *nuevo_nodo, *tmp;

nuevo_nodo = malloc(sizeof(list_t));
if (nuevo_nodo != NULL)
{
	nuevo_nodo->str = strdup(str);
if (nuevo_nodo->str != NULL)
nuevo_nodo->len = _strlen(nuevo_nodo->str);
nuevo_nodo->next = NULL;
if (*head == NULL)
	{
*head = nuevo_nodo;
		return (nuevo_nodo);
	}
	tmp = *head;
	while (tmp != NULL && tmp->next != NULL)
{
		tmp = tmp->next;
		}
		tmp->next = nuevo_nodo;
	}
return (nuevo_nodo);
}

/**
 * _strlen- Entry Point
 * @str: variable
 * Return: 0
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
