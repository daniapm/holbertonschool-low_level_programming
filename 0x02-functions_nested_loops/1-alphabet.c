#include <unistd.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 * print_alphabet - Función donde se ejecuta la lógica del programa.
 *
 */
void print_alphabet(void)
{
int letras;
for (letras = 97; letras <= 122; letras++)
{
putchar(letras); /* imprime la cadena */
}
putchar('\n');
return; /* sale de la función */
}
int main(void)
{
print_alphabet();
return (0);
}
