#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function tah prints a struct dog
 * @d: a pointer to dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "nil");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "nil");
	}
}
