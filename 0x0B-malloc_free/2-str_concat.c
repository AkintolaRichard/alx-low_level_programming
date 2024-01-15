#include "main.h"

int stringlen(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: destination
 * @s2: source
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int i;
	char *new;

	len1 = stringlen(s1);
	len2 = stringlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new = malloc((len1 + len2 + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(new + i) = *(s1 + i);

	for (i = 0; i < len2; i++)
		*(new + i + len1) = *(s2 + i);

	*(new + len1 + len2) = '\0';

	return (new);
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

	if (str == NULL)
		return (0);

	for (i = 0; *str != '\0'; i++)
		str++;

	return (i);
}
