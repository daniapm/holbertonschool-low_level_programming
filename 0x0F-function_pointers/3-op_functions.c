#include <stdio.h>
#include <stdlib.h>
#include  "calc.h"
#define SUMA ((a) + (b))
#define RESTA ((a) - (b))
#define MULT ((a) * (b))
#define DIV ((a) / (b))
#define MODUL ((a) % (b))

/**
 * op_add - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */

int op_add(int a, int b)
{
	int s;

	s = SUMA(a, b);
	return (s);
}

/**
 * op_sub - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */
int op_sub(int a, int b)
{
	int r;

	r = RESTA(a, b);
	return (r);
}

/**
 * op_mul - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */
int op_mul(int a, int b)
{
	int m;

	m = MULT(a, b);
	return (m);
}

/**
 * op_div - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */

int op_div(int a, int b)
{
	int d;

	d = DIV(a, b);
	return (d);
}

/**
 * op_mod - Entry Point
 * @a: variable
 * @b: variable
 * Return: 0
 */

int op_mod(int a, int b)
{
	int n;

	n = MOD(a, b);
	return (n);
}
