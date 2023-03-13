#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the array of strings
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i, sum = 0;

	for (i = 0; s[i] != 0; i++)
		sum++;
	return (sum);
}
