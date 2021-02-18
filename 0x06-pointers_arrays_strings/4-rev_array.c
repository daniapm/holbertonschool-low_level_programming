#include "holberton.h"

/**
 * reverse_array - rever
 * @a: variable
 * @n: variable
 * main - Return
 * Return: void
 */
void reverse_array(int *a, int n)
{
int *first = a;
int *last = a + n - 1;
while(first<last)
{
int temp = *first;
*first = *last;
*last = temp;
first++;
last--;
}
}
