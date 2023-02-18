#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
