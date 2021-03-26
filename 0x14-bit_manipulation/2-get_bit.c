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
return ((n & (1 << index)) > 0);
}
