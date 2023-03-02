#include "main.h"

/**
 * _strcpy - copies string
 * @dest: the destination of the copied string
 * @src: the source of the copied string
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < i + 1; i++)
		dest[i] = '\0';

	return (dest);
}
