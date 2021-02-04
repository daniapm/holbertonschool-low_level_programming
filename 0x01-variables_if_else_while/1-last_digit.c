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

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf(n % 10, n "%d and is greater than 5\n");
}
else if (n == 0)
{
printf(n % 10, n, "%d and is 0\n");
}
else if (n < 6 && n != 0)
{
printf(n % 10, n, "%d and is less than 6 and not 0");
}
return (0);
}
