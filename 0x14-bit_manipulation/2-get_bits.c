#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * the index read from right to left in ascending order
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, andmask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	andmask = 1 << index;
	i = n & andmask;

	if (i == 0)
		return (0);
	else
		return (1);
}
