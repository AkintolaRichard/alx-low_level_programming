#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: array of string
 * @src: array of string
 * @n: unsigned integer
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
