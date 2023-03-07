#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: array of character
 * @needle: array of character
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the string is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
				if (haystack[i + j] == needle[j] && needle[j + 1] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
