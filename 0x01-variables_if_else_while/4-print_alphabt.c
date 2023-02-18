#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in lowercase except 'q' and 'e'
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c = c + 1;
			continue;
		}
		else
		{
			putchar(c);
		}
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
