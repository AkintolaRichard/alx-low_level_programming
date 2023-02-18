#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in lowercase and uppercase
 *
 * Return: always 0
 */
int main(void)
{
	char c, C;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	C = 'A';
	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}
	putchar('\n');

	return (0);
}
