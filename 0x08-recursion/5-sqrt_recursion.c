#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - returns the natura square root of a number.
 * @n: integer
 *
 * Return: integer.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - a helper function that returns the square root of a number
 * @num: integer
 * @start: integer
 *
 * Return: integer, -1 if n does not have a natural square root
 */
int _sqrt(int num, int start)
{
	int square;

	square = start * start;
	if (square == num)
		return (start);
	else if (square < num)
		return (_sqrt(num, start + 1));
	else
		return (-1);
}
