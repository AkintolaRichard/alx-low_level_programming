#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first array of character
 * @s2: second array of character
 *
 * Return: pointer to an array of character
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *maptr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	k = i + j - 1;
	maptr = malloc(sizeof(char) * k);
	l = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		*(maptr + l) = s1[i];
		i++;
		l++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		*(maptr + l) = s2[j];
		j++;
		l++;
	}
	*(maptr + l) = '\0';
	return (maptr);
}
