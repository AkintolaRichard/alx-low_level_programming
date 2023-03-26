#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct
 * @d: pointer to the struct
 * @name: array of character i.e literal string
 * @age: float
 * @owner: array of character
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
