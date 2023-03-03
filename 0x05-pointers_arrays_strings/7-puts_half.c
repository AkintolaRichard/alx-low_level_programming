#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the string.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	printf("After loop i = %d\n", i);
	j = i / 2;
	printf("j = %d\n", j);
	for (k = j; k < i; k++)
		_putchar(str[k + 1]);
	_putchar('\n');
}
