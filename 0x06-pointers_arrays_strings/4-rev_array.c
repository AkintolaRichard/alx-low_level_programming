#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n; i < (n / 2); i++, j--)
	{
		k = a[i];
		*(a + i) = a[j - 1];
		*(a + (j - 1)) = k;
	}
}
