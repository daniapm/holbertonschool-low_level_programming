#ifndef DOG_H
#define DOG_H

#include <stdarg.h>

/**
 * struct tip - Struct op
 *
 * @a: The operator
 * @f: The function associated
 */

typedef struct tip
{
	char *a;
	void (*f)(va_list);
}tip_o;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif /* DOG_H */
