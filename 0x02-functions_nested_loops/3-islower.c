#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c: The character for check and verify if it is a lowercase character
 *
 * Return: if lowercase 1, else 0.
 */
int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
			return (1);
	}
	return (0);
}
