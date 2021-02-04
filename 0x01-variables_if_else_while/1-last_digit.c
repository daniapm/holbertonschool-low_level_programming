#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry init
 *
 * Return: Always 0
 */
int main(void)
{
int n;
int ultimo;
srand(time(0));
n = rand() - RAND_MAX / 2;
ultimo = n % 10;
if (ultimo > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ultimo);
}
else if (ultimo == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ultimo);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimo);
}
return (0);
}
