#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: the string.
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i; j > 0; j--)
		_putchar(s[j - 1]);
	_putchar('\n');
}
