#include <limits.h>
#include "main.h"
/**
 * print_number - prints an integer.
 * @n: the integer to be printed.
 * Return: void.
 */
void print_number(int n)
{
	int place = 10, remainder, num;

	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
			num = INT_MAX + 1;
		else
			num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num == 0 || num < 10)
	{
		_putchar((num % 10) + '0');
	}
	else
	{
		while (num)
		{
			if (num / place < 10)
			{
				remainder = num;
				break;
			}
			place = place * 10;
		}
		while (place != 1)
		{
			_putchar((remainder / place) + '0');
			remainder = remainder % place;
			place = place / 10;
		}
		_putchar((remainder % 10) + '0');
	}
}
