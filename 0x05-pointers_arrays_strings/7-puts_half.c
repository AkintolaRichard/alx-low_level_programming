#include "main.h"

/**
 * puts_half - prints half of a string.
 * @char: the string.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	j = i / 2;
	for (k = j; k < i; k++)
		_putchar(str[k]);
	_putchar('\n');
}
