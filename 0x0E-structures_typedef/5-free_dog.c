#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - copy
 * @d: variable
 * Return: void
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		if (d->name != '\0')
		{
		free(d->name);
		}
		if (d->owner != '\0')
		free(d->owner);
	}
		free(d);
}
