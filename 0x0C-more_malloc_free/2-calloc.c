#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: unsigned int, the number of elements of an array
 * @size: unsigned int, the size of bytes of each element in an array
 *
 * Return: pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;
	char *placement;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	placement = new;
	for (index = 0; index < (nmemb * size); index++)
		placement[index] = '\0';

	return (new);
}
