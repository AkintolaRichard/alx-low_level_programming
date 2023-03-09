#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: array of character
 * Return: integer
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome - checks if a string is palindrome
 * @s: array of character
 * @a: array of character
 * @n: integer
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int palindrome(char *a, char *s, int n)
{
	if (*s == '\0')
		return (1);
	if (*s != *(a + n))
		return (0);
	return (palindrome(a, s + 1, n - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: array of character
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s);
	return (palindrome(s, s, i - 1));
}
