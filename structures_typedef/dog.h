#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: - dog name
 * @age: - dog age
 * @owner: - dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
