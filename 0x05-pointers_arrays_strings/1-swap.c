#include "holberton.h"


/**
 * swap_int - swaps the values of two integers
 * @a: variable
 * @b: variable
 * main - Return
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temporal;
temporal = *a;
*a = *b;
*b = temporal;
return;
}
