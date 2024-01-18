#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to array of integer or NULL
 */
int *array_range(int min, int max)
{
	int *new;
	int index;

	if (min > max)
		return (NULL);

	new = malloc((max - min + 1) * sizeof(int));

	if (new == NULL)
		return (NULL);

	for (index = 0; index < (max - min + 1); index++)
		new[index] = min + index;

	return (new);
}
