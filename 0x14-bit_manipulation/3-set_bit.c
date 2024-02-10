#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: unsigned int
 * Return: 1 if it works, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int ormask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	ormask = 1 << index;
	*n |= ormask;
	return (1);
}
