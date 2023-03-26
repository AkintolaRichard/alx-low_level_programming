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
	char *the_name;
	char *the_owner;
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog)
		return (NULL);
	i = 0;
	while (name[i++])
		;
	j = 0;
	while (owner[j++])
		;
	the_name = malloc(sizeof(char) * i);
	if (the_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	the_owner = malloc(sizeof(char) * j);
	if (the_owner == NULL)
	{
		free(my_dog);
		free(the_name);
		return (NULL);
	}
	for (k = 0; name[k]; k++)
		the_name[k] = name[k];
	the_name[k] = '\0';
	for (k = 0; owner[k]; k++)
		the_owner[k] = owner[k];
	the_owner[k] = '\0';
	my_dog->name = the_name;
	my_dog->age = age;
	my_dog->owner = the_owner;
	return (my_dog);
}
