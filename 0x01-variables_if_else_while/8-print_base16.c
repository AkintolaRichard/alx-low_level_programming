#include <stdio.h>

/**
 * main - prints the numbers in base16
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
