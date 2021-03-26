#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>


/**
 * clear_bit - Entry Point
 * @n: variable
 * @index: variable
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int b, len;

len = (*n) * 8 - 1;

if (index > len)
return (-1);
b = ~(1 << index);
*n = b & *n;
return (1);
}
