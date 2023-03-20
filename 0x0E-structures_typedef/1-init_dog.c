#include "dog.h"

/**
 * init_dog - a function that initializes members of a struct
 * @d: pointer to struct dog to modify members of
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
