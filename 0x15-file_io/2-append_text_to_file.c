int _strlen(char *s);
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include "holberton.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{

int file, imprimir;

if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDWR | O_APPEND);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
imprimir = write(file, text_content, _strlen(text_content));
if (imprimir == -1)
{
return (-1);
}
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

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
