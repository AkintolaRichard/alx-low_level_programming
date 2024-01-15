#include "main.h"

int stringlen(char *str);

/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of the string given as parameter
 * @str: pointer to char (string)
 *
 * Return: NULL if str == NULL, pointer
 */
char *_strdup(char *str)
{
	int i, length;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	length = stringlen(str);

	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0';

	return (dup);
}

/**
 * stringlen - return the length of a string
 * @str: pointer to char
 *
 * Return: int
 */
int stringlen(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		str++;

	return (i);
}
