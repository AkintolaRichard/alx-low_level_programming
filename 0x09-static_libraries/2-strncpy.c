#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source of the copied string
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
