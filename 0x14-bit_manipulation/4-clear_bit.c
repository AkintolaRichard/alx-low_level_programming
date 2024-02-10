#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: unsigned int
 * Return: 1 if it works, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int notmask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	notmask = ~(1 << index);
	*n &= notmask;
	return (1);
}
