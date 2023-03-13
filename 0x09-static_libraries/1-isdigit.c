#include "main.h"

/**
 * _isdigit - checks for digit (0 throught 9).
 * @c: the digit
 *
 * Return: 1 if c is digit
 * 0 if otherwise.
 */
int _isdigit(int c)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
