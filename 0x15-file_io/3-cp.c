
unsigned int _strlen(char *s);
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
exit(99);
printf("Usage: cp file_from file_to\n");
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0700);
if (file_from == -1 || file_to == 1)
{
printf("Error: Can't read from file NAME_OF_THE_FILE");
exit(98);
}
fd = read(file_from, buffer, 1024);
if (fd > 0)
{
imprimir = write(file_to, buffer, fd);
}
if (imprimir != fd)
{
printf("Error: Can't write to NAME_OF_THE_FILE");
exit(99);
}
if (fd == -1)
{
printf("problem in reading");
exit(2);
}
close(file_to);
exit(0);
}
