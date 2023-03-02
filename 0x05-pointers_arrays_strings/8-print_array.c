#include "main.h"

/**
 * print_array - prints n number of elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
			printf(", ");
	}
	printf("\n");
}
