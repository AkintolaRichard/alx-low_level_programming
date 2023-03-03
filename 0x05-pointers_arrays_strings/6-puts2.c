#include "main.h"

/**
 * puts2 - prints every other character of a string skipping one, starting with
 * the first character..
 * @str: the input string.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
