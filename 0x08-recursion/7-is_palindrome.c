#include "holberton.h"
int largo(char *s, int i);
int revision(char *s, int l, int i);

/**
 * is_palindrome - print to strings.
 * @s: variable
 * main - Return
 * Return: void
 */

int is_palindrome(char *s)
{
int longitud;
longitud = largo(s, 0);
return (revision(s, longitud, 0));
}
/**
* revision - print to strings.
* @s: variable
* @a: variable
* @b: variable
* main - Return
* Return: void
*/

int revision(char *s, int a, int b)
{
if (s[b] == s[a])
{
return (revision(s, a - 1, b + 1));
}
if (s[b] == s[a] || b > 1)
{
return (1);
}
return (0);
}
/**
* largo - print to strings.
* @s: variable
* @i: variable
* main - Return
* Return: void
*/

int largo(char *s, int i)
{
if (s[i] != '\0')
{
return (largo(s, i + 1));
}
return (i - 1);
}
