#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to the dog struct to be initialized.
 * @name: Pointer to the name string of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string of the dog.
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
