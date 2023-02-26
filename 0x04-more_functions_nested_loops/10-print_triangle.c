#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		i = 0;
		while (i < size)
		{
			for (j = 0; j < size - 1 - i;  j++)
				_putchar(' ');
			for (k = 0; k < i + 1; k++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
