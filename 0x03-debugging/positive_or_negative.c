#include "main.h" 

/**
 * postive_or_negative - prints if integer is positive or negative
 *
 * Return: void.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
