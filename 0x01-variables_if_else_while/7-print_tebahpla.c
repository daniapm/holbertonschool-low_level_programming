#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alfabeto;
for (alfabeto = 122; alfabeto >= 97; alfabeto--)
{
putchar(alfabeto);
}
putchar('\n');
return (0);
}
