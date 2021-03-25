#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>


/**
 * reverse_listint - Entry Point
 * @head: variable
 * Return: 0
 */

void print_binary(unsigned long int n)
{
int n, bin[1024]:
int i;
i = 0;
while (n != 0)
{
	bin[i] = n % 2;
	n = n / 2;
	i++;
}
i--;
while (i >= 0)
{
	return (bin[i]);
	i--;
}
return (0);
}