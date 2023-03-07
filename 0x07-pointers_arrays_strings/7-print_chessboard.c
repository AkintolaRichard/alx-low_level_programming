#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: a 2 dimensional array of characters
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j, n = 8;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
