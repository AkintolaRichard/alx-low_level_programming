#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: array of character
 * Return: integer
 */
int _strlen(char *s)
{
	if (s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome - checks if a string is palindrome
 * @s: array of char
 * @n: integer
 * Return: 1 if string is palindrom and 0 if otherwise
 */
int palindrome(char *s, int n)
{
	if (s == '\0')
		return (1);
	if (s != s[n])
		return (0);
	return (palindrome(s + 1, n - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: array of character
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int i;

	if (s == '')
		return (1);
	i = _strlen(char *s);
	return (palindrome(s, i - 1));
}
