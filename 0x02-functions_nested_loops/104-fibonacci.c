#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, fr, second, next;

	fr = 1;
	second = 2;
	printf("%lu, ", fr);
	printf("%lu, ", second);
	for (i = 0; i < 96; i++)
	{
		next = fr + second;
		if (i == 95)
		{
			printf("%lu", next);
			continue;
		}
		printf("%lu, ", next);
		fr = second;
		second = next;
	}
	printf("\n");
}
