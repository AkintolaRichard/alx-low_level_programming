#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept.
 * @s: array of characters
 * @accept: array of characters
 * Return: a character pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (!k)
				{
					k = j;
				}
				else
				{
					if (j < k)
						k = j;
				}
			}
		}
	}
	if (k)
		return (&s[k]);
	else
		return (NULL);
}
