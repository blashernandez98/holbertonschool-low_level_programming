#include "dog.h"

/**
 * free_dog - Frees a dog struct.
 * @d: Dog to free.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
