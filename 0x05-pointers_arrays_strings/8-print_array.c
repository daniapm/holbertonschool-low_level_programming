#include "holberton.h"

/**
 * print_array - rever
 * @a: variable
 * @n: variable
 * main - Return
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
printf("%d", a[i]);
if (i != n -1)
{
printf(", ");
}
}
printf("\n");
}
