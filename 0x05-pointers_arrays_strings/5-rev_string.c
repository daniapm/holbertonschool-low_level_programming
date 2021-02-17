#include "holberton.h"

/**
 * rev_string - rever
 * @s: variable
 * main - Return
 * Return: void
 */
void rev_string(char *s)
{
int a = 0, b = 0;
char begin[1000];

while (*(s + a))
{
*(begin + a) = *(s + a);
a++;
}
a = a - 1;
while (a >= 0)
{
*(s + a) = *(begin + b);
b++;
a--;
}
}
