#include "dog.h"

/**
 * init_dog - Initializes dog structure.
 * @d: Pointer to struct.
 * @name: Name to store.
 * @age: Age to store.
 * @owner: Name of owner to store.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{	
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
