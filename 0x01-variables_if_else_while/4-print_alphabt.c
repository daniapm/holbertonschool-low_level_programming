#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letraInicial;
for (letraInicial = 97; letraInicial <= 122; letraInicial++)
{
putchar(letraInicial, DEL '111,113');
}
putchar('\n');
return (0);
}
