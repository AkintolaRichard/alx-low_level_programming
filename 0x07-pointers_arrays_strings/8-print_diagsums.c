#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * of integers
 * @a: array of integers
 * @size: integer
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
		sum1 += a[i];
	for (k = 0, j = size - 1; k < size; k++, j = j + size - 1)
		sum2 += a[j];
	printf("%d, %d\n", sum1, sum2);
}
