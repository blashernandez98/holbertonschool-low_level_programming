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

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);
char *_strdup(char *);
#endif
