#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: array of characters
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
