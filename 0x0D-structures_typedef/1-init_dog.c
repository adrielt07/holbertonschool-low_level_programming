#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - initialize struct dog
 * struct dog - takes dog info
 * @d: name of struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
