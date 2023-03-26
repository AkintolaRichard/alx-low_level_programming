#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog struct memory
 * @d: pointer to struct
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(&d->name);
		free(&d->owner);
		free(d);
	}
}
