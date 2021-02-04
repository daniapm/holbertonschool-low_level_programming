#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int mayuscula, minuscula;
for (minuscula = 97; minuscula <= 122; minuscula++)
{
putchar(minuscula);
}
for (mayuscula = 65; mayuscula <= 90; mayuscula++)
{
putchar(mayuscula);
}
putchar('\n');
return (0);
}
