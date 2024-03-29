#include "main.h"
/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 * @size: size of the array to be created
 * @c: the char to be initialized
 *
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
