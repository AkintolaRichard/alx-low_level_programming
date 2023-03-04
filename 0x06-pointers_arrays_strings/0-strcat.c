#include "main.h"

/**
 * _strcat - concatenates two strings
 * appends the source string to the destination string
 * @dest: the destination pointer
 * @src: the source pointer
 *
 * Return: pointer to the destination.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0, k = i; src[j] != '\0'; j++, k++)
		dest[k] = src[j];
	dest[k] = '\0';
	return (dest);
}
