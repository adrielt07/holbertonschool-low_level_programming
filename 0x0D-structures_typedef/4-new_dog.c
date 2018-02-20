#include "dog.h"
#include "stdlib.h"
/**
 * _strlen - calculate the length of string
 * @s: string to be calculated
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * new_dog - new dog info
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Null if Malloc failed or owner and name is empty
 * else Return the value of nDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;
	int c;

	if (name == NULL || owner == NULL)
		return (NULL);

	nDog = malloc(sizeof(dog_t));

	if (nDog == NULL)
		return (NULL);

	nDog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (nDog->name == NULL)
	{
		free(nDog);
		return (NULL);
	}
	for (c = 0; name[c] != '\0'; c++)
	{
		nDog->name[c] = name[c];
	}
	nDog->name[c] = '\0';

	nDog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (nDog->owner == NULL)
	{
		free(nDog->name);
		free(nDog);
		return (NULL);
	}
	for (c = 0; nDog->owner[c] != '\0'; c++)
	{
		nDog->owner[c] = owner[c];
	}
	nDog->owner[c] = '\0';

	nDog->age = age;

	return (nDog);

}
