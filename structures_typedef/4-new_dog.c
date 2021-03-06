#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include "strdup.c"
/**
 * new_dog - Creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Return: Pointer to new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res = NULL;

	res = malloc(sizeof(dog_t));
	if (res)
	{
		res->name = _strdup(name);
		if (res->name == NULL)
		{
			free(res);
			return (NULL);
		}
		res->owner = _strdup(owner);
		if (res->owner == NULL)
		{
			free(res->name);
			free(res);
			return (NULL);
		}
		res->age = age;
	}
	return (res);
}
