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
	char *nName;
	char *nOwner;

	if (name == NULL || owner == NULL)
		return (NULL);

	nDog = malloc(sizeof(dog_t));

	if (nDog == NULL)
		return (NULL);

	nName = malloc(sizeof(char) * _strlen(name) + 1);
	if (nName == NULL)
	{

		free(nDog);
		return (NULL);
	}

	nOwner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (nOwner == NULL)
	{
		free(nName);
		free(nDog);
		return (NULL);
	}

	nDog->name = nName;
	nDog->age = age;
	nDog->owner = nOwner;

	return (nDog);

}
