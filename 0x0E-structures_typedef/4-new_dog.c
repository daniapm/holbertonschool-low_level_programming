#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Entry Point
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
