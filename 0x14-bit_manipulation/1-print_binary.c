#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>


/**
 * print_binary - Entry Point
 * @n: variable
 * Return: 0
 */

void print_binary(unsigned long int n)
{

if (n == 0)
{
printf("0");
return;
}

if (n == 1)
{
printf("1");
return;
}
if (n > 1)
{
print_binary(n >> 1);

putchar(48 + (n & 1));
}
}
