#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, fr, second, next;

	fr = 1;
	second = 2;
	printf("%ld, ", fr);
	printf("%ld, ", second);
	for (i = 0; i < 48; i++)
	{
		next = fr + second;
		if (i == 47)
		{
			printf("%ld", next);
			continue;
		}
		printf("%ld, ", next);
		fr = second;
		second = next;
	}
	printf("\n");
	return (0);
}
