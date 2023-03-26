#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls a function on every element in an array
 * @array: an array
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
