#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Entry Point
 * @name: variable
 * @f: variable
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
