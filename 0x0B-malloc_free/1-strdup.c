#include "main.h"

/**
 * _strdup - a pointer to a allocated space in memory which contains a copy
 * of the string given as a parameter
 * @str: array of character
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *mptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	mptr = malloc(sizeof(char) * i);
	if (mptr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		*(mptr + j) = str[j];
	return (mptr);
}
