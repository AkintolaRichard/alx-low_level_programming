#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out base 10 numbers using putchar using ASCII
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
