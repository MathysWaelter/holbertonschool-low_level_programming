#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int x;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	i = strlen(name) + 1;
	x = strlen(owner) + 1;

	new_dog->name = malloc(sizeof(char) * i);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * x);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	return (new_dog);
}
