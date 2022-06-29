#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure.
 * @name: Name of dog.
 * @owner: Name of owner.
 * @age: Age of dog.
 *
 * Description: Just a dog structure.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
