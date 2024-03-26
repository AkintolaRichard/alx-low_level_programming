#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character
 *
 * Return: 1 if c is uppercase
 * 0 if otherwise.
 */
int _isupper(int c)
{
	char character;

	character = 'A';
	while (character <= 'Z')
	{
		if (c == character)
			return (1);
		character++;
	}
	return (0);
}
