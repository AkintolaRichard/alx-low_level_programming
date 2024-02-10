#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: string of 0 and 1
 * Return: the converted number or 0 if b is NULL or contain characters other
 * than 1 and 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int theint = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		theint += (b[j] - 48) * (1 << i);
		j++, i--;
	}
	return (theint);
}
