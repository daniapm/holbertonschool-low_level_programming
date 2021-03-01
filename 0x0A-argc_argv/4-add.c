#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 *
 * Return: 0 for succesful exit
 */
int main(int argc, char *argv[])
{
int sum;
int contador;
int a;

contador = 1;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (contador < argc)
{
for (a = 0; argv[contador][a] != '\0'; a++)
{
if (!(isdigit(argv[contador][a])))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[contador]);
contador++;
}
printf("%d\n", sum);
return (0);
}
