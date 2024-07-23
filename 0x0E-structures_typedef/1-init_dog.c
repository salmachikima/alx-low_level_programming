#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of a dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
