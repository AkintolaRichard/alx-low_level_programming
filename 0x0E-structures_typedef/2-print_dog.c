#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the attributes of a struct
 * @d: pointer to the struct
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	printf("%s\n", d->name ? d->name : "(nil)");
	printf("Age: ");
	d->age ? printf("%.6f\n", d->age) : printf("%s\n", "(nil)");
	printf("Owner: ");
	printf("%s\n", (*d).owner ? (*d).owner : "(nil)");
}
