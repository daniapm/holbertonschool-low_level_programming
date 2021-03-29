#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - Entry Point
 * @filename: variable
 * @letters: variable
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, fd, imprimir;
char *buffer;

if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file < 0)
{
return (0);
}
fd = read(file, buffer, letters);
if (fd == -1)
{
return (0);
}
imprimir = write(1, buffer, fd);
if (imprimir == -1)
{
return (0);
}
close(file);
free(buffer);
return (imprimir);
}
