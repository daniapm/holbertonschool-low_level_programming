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
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
