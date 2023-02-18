#include <stdio.h>

/**
 * main - prints the alphabets lowercase in reverse order
 *
 * Return: always 0;
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');

	return (0);
}
