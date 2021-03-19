#include<stdio.h>

void destructor(void)__attribute__ ((constructor));
/**
 * destructor - prints something before main
 *
 * Return: void
 */
void destructor(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
