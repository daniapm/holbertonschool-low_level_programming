#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 *
 * Return: 0 for succesful exit
 */
int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc - 1);
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}
