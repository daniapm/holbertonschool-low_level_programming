#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */

int op_add(int a, int b)
{
	int suma;

	suma = (a + b);
	return (suma);
}

/**
 * op_sub - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */
int op_sub(int a, int b)
{
	int resta;

	resta = (a - b);
	return (resta);
}

/**
 * op_mul - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */
int op_mul(int a, int b)
{
	int mult;

	mult = (a * b);
	return (mult);
}

/**
 * op_div - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */

int op_div(int a, int b)
{
	int div;

	div = (a / b);
	return (div);
}

/**
 * op_mod - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */

int op_mod(int a, int b)
{
	int mod;

	mod = (a % b);
	return (mod);
}
