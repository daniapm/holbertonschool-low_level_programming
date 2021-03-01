#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 *
 * Return: 0 for succesful exit
 */
int main(int argc, char **argv)
{
if (*argv[0] > 0)
printf("%i\n", argc - 1);
return (0);
}
