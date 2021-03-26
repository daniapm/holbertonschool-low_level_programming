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
unsigned int i;
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
for (i = 0; i < 31; i++)
{
printf("%c", ((n & (0x80000000)) ? '1' : '0'));
n = n << 1;
}
}
