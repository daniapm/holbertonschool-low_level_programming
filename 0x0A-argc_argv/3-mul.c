#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 *
 * Return: 0 for succesful exit
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
