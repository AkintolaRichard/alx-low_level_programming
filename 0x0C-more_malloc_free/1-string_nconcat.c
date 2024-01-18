#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the length of the second string to be joined to the second string
 *
 * Return: pointer to a the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i++])
		;
	while (s2[j++])
		;
	if (n >= j)
		n = j;
	new = (char *) malloc(sizeof(char) * (i + n));
	if (new == NULL)
		return (NULL);
	for (k = 0; k < i - 1; k++)
		new[k] = s1[k];
	for (l = 0; l < n; l++)
	{
		new[k] = s2[l];
		k++;
	}
	new[k] = '\0';
	return (new);
}
