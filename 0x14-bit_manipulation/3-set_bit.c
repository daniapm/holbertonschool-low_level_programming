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
unsigned int b;

if (index > 32)
{
return (-1);
}
b = (1 << index);
*n = b | *n;
return (1);
}
