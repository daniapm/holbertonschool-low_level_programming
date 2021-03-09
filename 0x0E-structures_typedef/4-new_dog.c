#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int largo(char *s);

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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)	
	{

		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (largo(name) + 1));
	if (dog->name ==  NULL)
	{
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;

	dog->owner = malloc(sizeof(char) * (largo(owner) + 1));
	{
		if (dog->owner ==  NULL)
		return (NULL);
	}
	dog->owner = _strcpy(dog->owner, owner);


	return (dog);
}

/**
 * *_strcpy - copy
 * @dest: variable
 * @src: variable
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *puntero = dest;

	while (*src != '\0')
	{
		*puntero = *src;
		puntero++;
		src++;
	}
	*puntero = '\0';
	return (dest);
}

/**
 * largo - largo
 * @s: variable
 * main - Return
 * Return: void
 *
 */
int largo(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
