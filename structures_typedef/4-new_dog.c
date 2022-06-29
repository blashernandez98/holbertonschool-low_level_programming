#include "dog.h"

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
		res->name = name;
		res->age = age;
		res->owner = owner;
	}
	return (res);
}
