#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * flip_bits - Entry Point
 * @n: variable
 * @m: variable
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int distance = 0;
    unsigned int val;
    val = n ^ m;

    if (distance < 32)
        while (val)
        {
            distance++;
            val &= val - 1;
        }
    return (distance);
}
