#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fr, second;
	unsigned long int hold1, hold2, hold3;
	unsigned long int fr1 = 0, fr2 = 0;
	int i;

	fr = 1;
	second = 2;
	printf("%lu, %lu, ", fr, second);
	for (i = 0; i < 96; i++)
	{
		if (fr + second > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (fr + second) / LARGEST;
			hold2 = (fr + second) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			fr = second, second = hold2;
			printf("%lu%010lu", fr2, second);
		}
		else
		{
			hold2 = fr + second;
			fr = second, second = hold2;
			printf("%lu", second);
		}
		if (i != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
