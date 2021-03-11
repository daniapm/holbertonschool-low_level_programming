#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry Point
 * @ac: variable
 * @av: variable
 * Return: 0
 */

int main(int ac, char **av)
{

	int num1, num2, result;
	char *op;
	int (*f)(int a, int b);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(av[1]);
	op = av[2];
	num2 = atoi(av[3]);

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(op);
	result = f(num1, num2);
	printf("%d\n", result);
return (0);
}
