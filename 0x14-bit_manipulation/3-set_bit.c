#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>


/**
 * set_bit - Entry Point
 * @n: variable
 * @index: variable
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
mask = (1 << index);
*n = mask | *n;
return (1);
}
