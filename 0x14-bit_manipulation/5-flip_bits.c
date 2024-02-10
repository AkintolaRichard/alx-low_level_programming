#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int xor;

	count = 0;
	for (xor = n ^ m; xor != 0; xor >>= 1)
	{
		count += (xor & 1);
	}
	return (count);
}
