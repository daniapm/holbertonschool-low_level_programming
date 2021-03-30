#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
int _strlen(char *s);

/**
 * create_file - Entry Point
 * @filename: variable
 * @text_content: variable
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
int file, imprimir;

if (filename == NULL)
{
return (0);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
imprimir = write(file, text_content, _strlen(text_content));
}
if (imprimir < 0)
{
return (-1);
}
close(file);
return (1);
}

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Entry Point
 * @s: variable
 * Return: 0
 */

int _strlen(char *s)
{
int i;

i = 0;

while (*s)
{
s++;
i++;
}
return (i);
}
