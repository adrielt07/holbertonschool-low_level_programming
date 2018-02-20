#ifndef _dog
#define _dog

/**
 * struct dog - structure for dog name age and owner
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}; typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
