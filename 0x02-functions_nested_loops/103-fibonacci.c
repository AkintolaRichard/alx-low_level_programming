#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms..
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fr, second, next, sum;

	fr = 1;
	second = 2;
	sum = 0;
	sum = sum + second;
	next = fr + second;
	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum = sum + next;
		fr = second;
		second = next;
		next = fr + second;
	}
	printf("%ld\n", sum);
	return (0);
}
