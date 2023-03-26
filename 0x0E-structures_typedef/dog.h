#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: array of character
 * @age: float
 * @owner: array of character
 *
 * Description: a dog structure with name, age and owner attribute
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#define dog_t struct dog
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
