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
for (i = 8 * sizeof(i); i-- != 0;)
{
char c;
if ((n & (1UL << i)) != 0)
c = '1';
else
c = '0';

printf("%c", c);

}
}
