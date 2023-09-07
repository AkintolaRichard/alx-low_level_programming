#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: unsigned integer, the memory size
 *
 * Return: pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
