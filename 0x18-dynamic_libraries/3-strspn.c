#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: array of characters
 * @accept: array of characters
 *
 * Return: unsigned integer, the number of bytes in the initial segments of s,
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
