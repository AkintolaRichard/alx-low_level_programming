#include "main.h"

/**
 * _strncat - concatenates two strings, appends the a number of bytes
 * from the source to the destination.
 * @dest: destionation pointer
 * @src: source pointer
 * @n: number of bytes to be added to the destination
 *
 * Return: pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0, k = i; j < n && src[j] != '\0'; j++, k++)
		dest[k] = src[j];
	dest[k] = '\0';
	return (dest);
}
