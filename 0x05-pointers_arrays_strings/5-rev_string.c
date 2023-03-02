#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i, j, k;
	char str;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (k = 0, j = i; k < (j / 2); k++, j--)
	{
		str = s[k];
		*(s + k) = s[j - 1];
		*(s + (j - 1)) = str;
	}
}
