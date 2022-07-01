#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("(nil");

	if ((*d).owner == NULL)
		printf("(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}