#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>


/**
 * get_bit - Entry Point
 * @n: variable
 * @index: variable
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int b;

b = ((n & (1 << index)) > 0);
if (b == 1 || b == 0)
return (b);
else
return (-1);
}
