#include "holberton.h"

/**
 * *_strcpy - rever
 * @dest: variable
 * @src: variable
 * main - Return
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (0);
}
