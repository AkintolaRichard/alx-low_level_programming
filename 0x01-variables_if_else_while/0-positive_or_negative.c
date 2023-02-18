#include <stdlib.h>
#include <time.h>

/**
 * main - Assigns a random number to a variable each time it is executed
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%d is positive\n", n);
	else if (n == 0)
		print("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
