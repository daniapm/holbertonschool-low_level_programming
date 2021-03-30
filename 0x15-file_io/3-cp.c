#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include "holberton.h"

/**
 * main - Entry Point
 * @argc: file name
 * @argv: text content
 * Return: 1
 */

int main(int argc, char *argv[])
{

int file_from, file_to, imprimir, fd;
char buffer[1024];

if (argc < 3)
{
printf("Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0700);
if (file_to == -1)
{
printf("Error: Can't read from file %s\n", argv[2]);
exit(99);
}
while (fd >= 1024)
{
fd = read(file_from, buffer, 1024);
if (fd == -1)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}
imprimir = write(file_to, buffer, fd);
if (imprimir == -1)
{
printf("Error: Can't read from file %s\n", argv[2]);
exit(99);
}
}
close(file_from);
close(file_to);
return (0);
}
