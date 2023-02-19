#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
