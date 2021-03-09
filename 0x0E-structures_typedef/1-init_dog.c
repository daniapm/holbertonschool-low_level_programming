#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - prototype
 * @d: varianle 1
 * @name: varianle 2
 * @age: varianle 3
 * @owner: varianle 4
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
