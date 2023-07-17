#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the dog struct to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age >= 0) ? d->age : -1.0);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
