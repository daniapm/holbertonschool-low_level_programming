#include "holberton.h"

/**
 * print_diagsums - prints number
 * @a: variable
 * @size: variable
 * main - Return
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar (suma + a[i][j]);
}
}
