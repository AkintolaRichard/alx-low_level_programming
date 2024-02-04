#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: array of character
 * @age: float
 * @owner: array of character
 *
 * Return: pointer to a struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	i = 0;
	while (name[i++])
		;
	j = 0;
	while (owner[j++])
		;
	my_dog->name = malloc(sizeof(my_dog->name) * i);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(my_dog->owner) * j);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		my_dog->name[k] = name[k];
	for (k = 0; k <= j; k++)
		my_dog->owner[k] = owner[k];
	my_dog->age = age;
	return (my_dog);
}
