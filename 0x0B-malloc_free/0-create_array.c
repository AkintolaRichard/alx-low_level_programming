#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @size: integer
 * @c: character
 *
 * Return: pointer to the character
 */
char *create_array(unsigned int size, char c)
{
	char *mptr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	mptr = malloc(sizeof(c) * size);
	if (mptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(mptr + i) = c;
		i++;
	}
	return (mptr);
}
